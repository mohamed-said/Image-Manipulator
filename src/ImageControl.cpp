#include "imagecontrol.h"
#include "ui_imagecontrol.h"

#include "QPainter"
#include "QMouseEvent"
#include <QStatusBar>

#include "MainWindow.h"

ImageControl::ImageControl(QWidget *parent): QWidget(parent), ui(new Ui::ImageControl) {
    
	ui->setupUi(this);

    this->zoomLevel = 1;

    this->DrawMode = DrawModes_None;
    this->DrawMode_Started = false;

    this->currentImageIndex = -1;
}

ImageControl::~ImageControl() {
    for(int i = 0; i < HistoryImages.size(); ++i){
        delete HistoryImages[i];
    }
    delete ui;
}

void ImageControl::SetDrawingMode(DrawModes mode){
    this->DrawMode = mode;
    if(mode == DrawModes_None)
    {
        clearSelection();
        update();
    }
}

void ImageControl::clearSelection(){
    DrawMode_StartPoint *= 0;
    DrawMode_CurrentPoint *= 0;
}

void ImageControl::setZoomLevel(float level){
    zoomLevel = level;
}

void ImageControl::update(){
    if(isReady())
    {
        QSize s = getImage()->size();
        s *= zoomLevel;
        setMinimumWidth(s.width());
        setMinimumHeight(s.height());
    }

    QWidget::update();
}

void ImageControl::redo(){
    currentImageIndex++;

    this->update();
    this->updateStatus();
}

void ImageControl::undo(){
    currentImageIndex --;

    this->update();
    this->updateStatus();
}

void ImageControl::updateStatus()
{
    canRedoChanged(currentImageIndex+1 < HistoryImages.size());
    canUndoChanged(currentImageIndex-1 > -1);
}

QImage* ImageControl::getImage(){
    return HistoryImages[currentImageIndex];
}

void ImageControl::setImage(QImage* value)
{
    int NoOfRedo = (HistoryImages.size() - 1) - currentImageIndex;
    if(NoOfRedo > 0)
    {
        for(int i=currentImageIndex+1; i<NoOfRedo; ++i){
            delete HistoryImages[i];
        }

        HistoryImages.remove(currentImageIndex+1, NoOfRedo);
    }

    currentImageIndex++;
    HistoryImages.push_back(value);

    QImage temp(getImage()->size(), QImage::Format_ARGB32);
    DrawMode_FillImage = temp;
    DrawMode_FillImage.fill(Qt::transparent);

    this->update();
    this->updateStatus();

    isReadyChanged(isReady());
}

bool ImageControl::isReady()
{
    return currentImageIndex > -1 && !getImage()->isNull();
}

void ImageControl::mousePressEvent(QMouseEvent* event)
{
    if(DrawMode != DrawModes_None && event->buttons() == Qt::LeftButton){
        DrawMode_Started = true;
        DrawMode_StartPoint = event->pos() / zoomLevel;
    }

}

void ImageControl::mouseMoveEvent(QMouseEvent* event)
{
    if(DrawMode_Started && event->buttons() == Qt::LeftButton){
        DrawMode_CurrentPoint = event->pos() / zoomLevel;

        this->update();
    }
}

void ImageControl::mouseReleaseEvent(QMouseEvent* event)
{
    if(DrawMode_Started)
    {
        DrawMode_Started = false;
        DrawMode_CurrentPoint = event->pos() / zoomLevel;

        if(DrawMode != DrawModes_Selection){
            QImage *newImage = new QImage(*getImage());
            DrawShape(newImage, CurrentSelection());

            this->setImage(newImage);
            this->update();

            clearSelection();
        }

        if(DrawMode == DrawModes_Selection && DrawMode_StartPoint == DrawMode_CurrentPoint){
            clearSelection();
            update();
        }
    }
}

void ImageControl::paintEvent(QPaintEvent *event)
{
    if(this->isReady()){
        QPainter painter(this);

        QRect src;
        src.setSize(getImage()->size());

        painter.drawImage(QRect(0, 0, this->width(), this->height()), *getImage(), src);


        if(DrawMode == DrawModes_Selection){
            QPen pen(Qt::DotLine);
            pen.setWidth(2);
            painter.setPen(pen);
            QRect select(DrawMode_StartPoint *zoomLevel, DrawMode_CurrentPoint *zoomLevel);
            painter.drawRect(select);
        }

        if(DrawMode_Started && DrawMode != DrawModes_Selection) {
            DrawMode_FillImage.fill(Qt::transparent);

            DrawShape(&DrawMode_FillImage, CurrentSelection());

            painter.drawImage(QRect(0, 0, this->width(), this->height()), DrawMode_FillImage, src);
        }
    }
}

QRect ImageControl::CurrentSelection()
{
    QPoint p1, p2;
    p1 = DrawMode_StartPoint;
    p2 = DrawMode_CurrentPoint;

    int X = DrawMode_StartPoint.x();
    int Y = DrawMode_StartPoint.y();

    int Height = DrawMode_CurrentPoint.y() - DrawMode_StartPoint.y();
    int Width;

    if(DrawMode == DrawModes_Circle || DrawMode == DrawModes_Square)
        Width = Height;
    else
        Width = DrawMode_CurrentPoint.x()-DrawMode_StartPoint.x();


    if(Width < 0) {
        X += Width;
        Width = qAbs(Width);
    }

    if(Height<0){
        Y += Height;
        Height = qAbs(Height);
    }

    QRect res(X, Y, Width, Height);
    return res;

}

void ImageControl::setOutline(bool value){
    this->Outline = value;
}
void ImageControl::setFilled(bool value){
    this->Filled = value;
}

void ImageControl::setBackColor(QColor color){
    this->backColor = color;
}

void ImageControl::setFrontColor(QColor color){
    this->frontColor = color;
}

void ImageControl::DrawShape(QImage* image, QRect r){
    
	ImageDrawer drawer(image);
    drawer.setBackColor(backColor);
    drawer.setFrontColor(frontColor);
    drawer.setOutline(Outline);
    drawer.setFilled(Filled);

    switch (DrawMode){
        case DrawModes_Circle:
            drawer.DrawEllipse(r);
            break;

        case DrawModes_Rectanlge:
            drawer.DrawRect(r);
            break;

        case DrawModes_Triangle:
            drawer.DrawTriangle(r);
            break;

        case DrawModes_Line:
            drawer.DrawLine(DrawMode_StartPoint, DrawMode_CurrentPoint);
            break;

        case DrawModes_Square:
            drawer.DrawRect(r);

            break;

        case DrawModes_Ellipse:
            drawer.DrawEllipse(r);
            break;

        case DrawModes_Selection:
            break;
    }
}
