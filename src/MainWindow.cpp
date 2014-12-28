#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "GeneralDialog.h"

#include <QFileDialog>
#include <QColorDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(this->ui->imageControl, SIGNAL(canUndoChanged(bool)), this->ui->actionUndo, SLOT(setEnabled(bool)));
    connect(this->ui->imageControl, SIGNAL(canRedoChanged(bool)), this->ui->actionRedo, SLOT(setEnabled(bool)));

    connect(this->ui->imageControl, SIGNAL(isReadyChanged(bool)), this->ui->actionSave, SLOT(setEnabled(bool)));
    connect(this->ui->imageControl, SIGNAL(isReadyChanged(bool)), this->ui->actionSave_As, SLOT(setEnabled(bool)));
    connect(this->ui->imageControl, SIGNAL(isReadyChanged(bool)), this->ui->menuFilter, SLOT(setEnabled(bool)));
    connect(this->ui->imageControl, SIGNAL(isReadyChanged(bool)), this->ui->menuImage, SLOT(setEnabled(bool)));

    connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(newfile()));
    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open()));
    connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(save()));
    connect(ui->actionSave_As, SIGNAL(triggered()), this, SLOT(saveas()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(exit()));

    connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(about()));

    connect(ui->actionUndo, SIGNAL(triggered()), ui->imageControl, SLOT(undo()));
    connect(ui->actionRedo, SIGNAL(triggered()), ui->imageControl, SLOT(redo()));

    connect(ui->menuFilter, SIGNAL(triggered(QAction*)), this, SLOT(FilterMenuHandler(QAction*)));
    connect(ui->menuImage, SIGNAL(triggered(QAction*)), this, SLOT(ImageMenuHandler(QAction*)));


    connect(ui->arrowButton, SIGNAL(clicked()), this, SLOT(setDrawNothing()));
    connect(ui->selectionButton, SIGNAL(clicked()), this, SLOT(setDrawSelection()));
    connect(ui->squareButton, SIGNAL(clicked()), this, SLOT(setDrawSquare()));
    connect(ui->buttonCircle, SIGNAL(clicked()), this, SLOT(setDrawCircle()));
    connect(ui->buttonRectangle, SIGNAL(clicked()), this, SLOT(setDrawRectangle()));
    connect(ui->ellipseButton, SIGNAL(clicked()), this, SLOT(setDrawEllipse()));
    connect(ui->lineButton, SIGNAL(clicked()), this, SLOT(setDrawLine()));
    connect(ui->triangleButton, SIGNAL(clicked()), this, SLOT(setDrawTriangle()));

    connect(ui->zoomBox, SIGNAL(highlighted(QString)), this, SLOT(ZoomChanged(QString)));
    connect(ui->zoomBox, SIGNAL(editTextChanged(QString)), this, SLOT(ZoomChanged(QString)));

    connect(ui->isFillBox, SIGNAL(toggled(bool)), ui->imageControl, SLOT(setFilled(bool)));
    connect(ui->isOutlineBox, SIGNAL(toggled(bool)), ui->imageControl, SLOT(setOutline(bool)));

    connect(ui->buttonFronColor, SIGNAL(ColorChanged(QColor)), ui->imageControl, SLOT(setFrontColor(QColor)));
    connect(ui->buttonBackColor, SIGNAL(ColorChanged(QColor)), ui->imageControl, SLOT(setBackColor(QColor)));

    ui->scrollArea->setWidget(ui->imageControl);
    ui->scrollArea->setBackgroundRole(QPalette::Dark);

    ui->isFillBox->toggle();
    ui->isOutlineBox->toggle();
    ui->buttonFronColor->setColor(Qt::black);
    ui->buttonBackColor->setColor(Qt::white);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::newfile(){
    QImage *image = new QImage(500, 500, QImage::Format_RGB32);
    image->fill(ui->buttonBackColor->getColor().rgb());

    ui->imageControl->setImage(image);
    this->update();
}

void MainWindow::open()
{
    FileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    if(FileName != ""){
        QImage *image = new QImage(FileName);
        ui->imageControl->setImage(image);
        this->update();
    }
}

void MainWindow::about()
{
    QMessageBox::information(this, "About",
                             "Developed By: Mohamed Kamal Kamaly, Mohamed Said, Mahmoud Mohsen");
}

void MainWindow::save()
{
    if(!ui->imageControl->isReady())
        return;

    if(FileName == "")
            saveas();
    else
        ui->imageControl->getImage()->save(FileName);
}

void MainWindow::saveas()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Open File"),
                                                    "",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    if(fileName != "")
        ui->imageControl->getImage()->save(fileName);
}

void MainWindow::exit(){
    this->close();
}

void MainWindow::ZoomChanged(QString zoomStr){
    float zoom = zoomStr.remove('%').toFloat();
    ui->imageControl->setZoomLevel(zoom/100);
    ui->imageControl->update();
}

void MainWindow::setDrawSelection(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Selection);
}

void MainWindow::setDrawLine(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Line);
}

void MainWindow::setDrawEllipse(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Ellipse);
}

void MainWindow::setDrawTriangle(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Triangle);
}

void MainWindow::setDrawSquare(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Square);
}

void MainWindow::setDrawRectangle(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Rectanlge);
}

void MainWindow::setDrawCircle(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_Circle);
}

void MainWindow::setDrawNothing(){
    ui->imageControl->SetDrawingMode(ImageControl::DrawModes_None);
}

void MainWindow::FilterMenuHandler(QAction* action)
{
    if(!ui->imageControl->isReady())
        return;

    QImage *currentImage = ui->imageControl->getImage();
    QImage *newImage;

    ImageEffect effect(currentImage);
    QRect src = ui->imageControl->CurrentSelection();

    if(src.isEmpty()){
        src.setWidth(ui->imageControl->getImage()->width()-1);
        src.setHeight(ui->imageControl->getImage()->height()-1);
    }

    effect.setRegion(src);

    if(action == ui->actionBlur){
        int strength = BlurDialog::OpenBlurDialog(this);

        if( strength == -1)
            return;

        newImage = effect.blur(strength);
    }

    else if(action == ui->actionIncrease_Brightness)
        newImage = effect.brightness(+5);

    else if(action == ui->actionIncrease_Red)
        newImage = effect.red(+5);

    else if(action == ui->actionIncrease_Green)
        newImage = effect.green(+5);

    else if(action == ui->actionIncrease_Blue)
        newImage = effect.blue(+5);

    else if(action == ui->actionDecrease_Brightness)
        newImage = effect.brightness(-5);

    else if(action == ui->actionDecrease_Red)
        newImage = effect.red(-5);

    else if(action == ui->actionDecrease_Green)
        newImage = effect.green(-5);

    else if(action == ui->actionDecrease_Blue)
        newImage = effect.blue(-5);

    else if(action == ui->actionGrayscale)
        newImage = effect.grayscale();

    else if(action == ui->actionInvert_Colors)
        newImage = effect.invert();

    else if(action == ui->actionNegative)
        newImage = effect.negative();

    ui->imageControl->setImage(newImage);
    ui->imageControl->update();
}

void MainWindow::ImageMenuHandler(QAction* action){

    QImage *currentImage = ui->imageControl->getImage();
    QImage *newImage;

    ImageEffect effect(currentImage);
    QRect src = ui->imageControl->CurrentSelection();

    if(action == ui->actionResize){
        QSize oldSize = currentImage->size();
        QSize newSize = ResizeDialog::OpenResizeDialog(oldSize, this);

        if(newSize == oldSize)
            return;

        newImage = effect.resize(newSize);
    }

    else if(action == ui->actionCrop)
        newImage = effect.crop(src);

    else if(action == ui->actionRotate_90_Clockwise)
        newImage = effect.rotateClockwise();

    else if(action == ui->actionRotate_90_Anti_Clockwise)
        newImage = effect.rotateAntiClockwise();

    else if(action == ui->actionFlip_Vertical)
        newImage = effect.flipVertical();

    else if(action == ui->actionFlip_Horizontal)
        newImage = effect.flipHorizontal();

    ui->imageControl->setImage(newImage);
    ui->imageControl->update();
}
