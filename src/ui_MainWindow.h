/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Mon 24. Dec 14:45:12 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "colorbutton.h"
#include "imagecontrol.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBlur;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionSave_As;
    QAction *actionRotate_90_Clockwise;
    QAction *actionRotate_90_Anti_Clockwise;
    QAction *actionResize;
    QAction *actionCrop;
    QAction *actionFlip_Horizontal;
    QAction *actionFlip_Vertical;
    QAction *actionNew;
    QAction *actionInvert_Colors;
    QAction *actionGrayscale;
    QAction *actionNegative;
    QAction *actionIncrease_Red;
    QAction *actionDecrease_Red;
    QAction *actionIncrease_Brightness;
    QAction *actionDecrease_Brightness;
    QAction *actionIncrease_Contrast;
    QAction *actionDecrease_Contrast;
    QAction *actionIncrease_Blue;
    QAction *actionDecrease_Blue;
    QAction *actionIncrease_Green;
    QAction *actionDecrease_Green;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *toolBox;
    QCheckBox *isFillBox;
    QCheckBox *isOutlineBox;
    ColorButton *buttonBackColor;
    ColorButton *buttonFronColor;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *arrowButton;
    QToolButton *selectionButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *squareButton;
    QToolButton *buttonRectangle;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *buttonCircle;
    QToolButton *ellipseButton;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *lineButton;
    QToolButton *triangleButton;
    QComboBox *zoomBox;
    ImageControl *imageControl;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuFilter;
    QMenu *menuRed;
    QMenu *menuContrast;
    QMenu *menuBrightness;
    QMenu *menuBlue;
    QMenu *menuGreen;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuImage;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(693, 468);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionBlur = new QAction(MainWindow);
        actionBlur->setObjectName(QString::fromUtf8("actionBlur"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setCheckable(false);
        actionOpen->setShortcutContext(Qt::ApplicationShortcut);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(false);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setEnabled(false);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setEnabled(false);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave_As->setEnabled(false);
        actionRotate_90_Clockwise = new QAction(MainWindow);
        actionRotate_90_Clockwise->setObjectName(QString::fromUtf8("actionRotate_90_Clockwise"));
        actionRotate_90_Anti_Clockwise = new QAction(MainWindow);
        actionRotate_90_Anti_Clockwise->setObjectName(QString::fromUtf8("actionRotate_90_Anti_Clockwise"));
        actionResize = new QAction(MainWindow);
        actionResize->setObjectName(QString::fromUtf8("actionResize"));
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        actionFlip_Horizontal = new QAction(MainWindow);
        actionFlip_Horizontal->setObjectName(QString::fromUtf8("actionFlip_Horizontal"));
        actionFlip_Vertical = new QAction(MainWindow);
        actionFlip_Vertical->setObjectName(QString::fromUtf8("actionFlip_Vertical"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionInvert_Colors = new QAction(MainWindow);
        actionInvert_Colors->setObjectName(QString::fromUtf8("actionInvert_Colors"));
        actionGrayscale = new QAction(MainWindow);
        actionGrayscale->setObjectName(QString::fromUtf8("actionGrayscale"));
        actionNegative = new QAction(MainWindow);
        actionNegative->setObjectName(QString::fromUtf8("actionNegative"));
        actionIncrease_Red = new QAction(MainWindow);
        actionIncrease_Red->setObjectName(QString::fromUtf8("actionIncrease_Red"));
        actionDecrease_Red = new QAction(MainWindow);
        actionDecrease_Red->setObjectName(QString::fromUtf8("actionDecrease_Red"));
        actionIncrease_Brightness = new QAction(MainWindow);
        actionIncrease_Brightness->setObjectName(QString::fromUtf8("actionIncrease_Brightness"));
        actionDecrease_Brightness = new QAction(MainWindow);
        actionDecrease_Brightness->setObjectName(QString::fromUtf8("actionDecrease_Brightness"));
        actionIncrease_Contrast = new QAction(MainWindow);
        actionIncrease_Contrast->setObjectName(QString::fromUtf8("actionIncrease_Contrast"));
        actionDecrease_Contrast = new QAction(MainWindow);
        actionDecrease_Contrast->setObjectName(QString::fromUtf8("actionDecrease_Contrast"));
        actionIncrease_Blue = new QAction(MainWindow);
        actionIncrease_Blue->setObjectName(QString::fromUtf8("actionIncrease_Blue"));
        actionDecrease_Blue = new QAction(MainWindow);
        actionDecrease_Blue->setObjectName(QString::fromUtf8("actionDecrease_Blue"));
        actionIncrease_Green = new QAction(MainWindow);
        actionIncrease_Green->setObjectName(QString::fromUtf8("actionIncrease_Green"));
        actionDecrease_Green = new QAction(MainWindow);
        actionDecrease_Green->setObjectName(QString::fromUtf8("actionDecrease_Green"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 566, 407));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 2, 2, 1);

        toolBox = new QGroupBox(centralWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(85, 330));
        toolBox->setMaximumSize(QSize(85, 16777215));
        isFillBox = new QCheckBox(toolBox);
        isFillBox->setObjectName(QString::fromUtf8("isFillBox"));
        isFillBox->setGeometry(QRect(16, 207, 41, 17));
        isOutlineBox = new QCheckBox(toolBox);
        isOutlineBox->setObjectName(QString::fromUtf8("isOutlineBox"));
        isOutlineBox->setGeometry(QRect(15, 180, 61, 17));
        buttonBackColor = new ColorButton(toolBox);
        buttonBackColor->setObjectName(QString::fromUtf8("buttonBackColor"));
        buttonBackColor->setGeometry(QRect(30, 280, 40, 40));
        buttonBackColor->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        buttonFronColor = new ColorButton(toolBox);
        buttonFronColor->setObjectName(QString::fromUtf8("buttonFronColor"));
        buttonFronColor->setGeometry(QRect(10, 260, 40, 40));
        buttonFronColor->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(toolBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 20, 71, 136));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        arrowButton = new QToolButton(layoutWidget);
        arrowButton->setObjectName(QString::fromUtf8("arrowButton"));
        arrowButton->setMinimumSize(QSize(27, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MainWindow/Icons/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        arrowButton->setIcon(icon);
        arrowButton->setCheckable(true);
        arrowButton->setChecked(true);
        arrowButton->setAutoExclusive(true);

        horizontalLayout_5->addWidget(arrowButton);

        selectionButton = new QToolButton(layoutWidget);
        selectionButton->setObjectName(QString::fromUtf8("selectionButton"));
        selectionButton->setMinimumSize(QSize(27, 27));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MainWindow/Icons/Selection.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectionButton->setIcon(icon1);
        selectionButton->setCheckable(true);
        selectionButton->setChecked(false);
        selectionButton->setAutoExclusive(true);

        horizontalLayout_5->addWidget(selectionButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        squareButton = new QToolButton(layoutWidget);
        squareButton->setObjectName(QString::fromUtf8("squareButton"));
        squareButton->setMinimumSize(QSize(27, 27));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MainWindow/Icons/Square.png"), QSize(), QIcon::Normal, QIcon::Off);
        squareButton->setIcon(icon2);
        squareButton->setCheckable(true);
        squareButton->setAutoExclusive(true);

        horizontalLayout->addWidget(squareButton);

        buttonRectangle = new QToolButton(layoutWidget);
        buttonRectangle->setObjectName(QString::fromUtf8("buttonRectangle"));
        buttonRectangle->setMinimumSize(QSize(27, 27));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MainWindow/Icons/Rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRectangle->setIcon(icon3);
        buttonRectangle->setCheckable(true);
        buttonRectangle->setAutoExclusive(true);

        horizontalLayout->addWidget(buttonRectangle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonCircle = new QToolButton(layoutWidget);
        buttonCircle->setObjectName(QString::fromUtf8("buttonCircle"));
        buttonCircle->setMinimumSize(QSize(27, 27));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MainWindow/Icons/Circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonCircle->setIcon(icon4);
        buttonCircle->setCheckable(true);
        buttonCircle->setAutoExclusive(true);

        horizontalLayout_2->addWidget(buttonCircle);

        ellipseButton = new QToolButton(layoutWidget);
        ellipseButton->setObjectName(QString::fromUtf8("ellipseButton"));
        ellipseButton->setMinimumSize(QSize(27, 27));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MainWindow/Icons/Ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        ellipseButton->setIcon(icon5);
        ellipseButton->setCheckable(true);
        ellipseButton->setAutoExclusive(true);

        horizontalLayout_2->addWidget(ellipseButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineButton = new QToolButton(layoutWidget);
        lineButton->setObjectName(QString::fromUtf8("lineButton"));
        lineButton->setMinimumSize(QSize(27, 27));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/MainWindow/Icons/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        lineButton->setIcon(icon6);
        lineButton->setCheckable(true);
        lineButton->setAutoExclusive(true);

        horizontalLayout_3->addWidget(lineButton);

        triangleButton = new QToolButton(layoutWidget);
        triangleButton->setObjectName(QString::fromUtf8("triangleButton"));
        triangleButton->setMinimumSize(QSize(27, 27));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/MainWindow/Icons/Triangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        triangleButton->setIcon(icon7);
        triangleButton->setCheckable(true);
        triangleButton->setAutoExclusive(true);

        horizontalLayout_3->addWidget(triangleButton);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addWidget(toolBox, 0, 0, 1, 1);

        zoomBox = new QComboBox(centralWidget);
        zoomBox->setObjectName(QString::fromUtf8("zoomBox"));
        zoomBox->setEditable(true);

        gridLayout->addWidget(zoomBox, 1, 0, 1, 1);

        imageControl = new ImageControl(centralWidget);
        imageControl->setObjectName(QString::fromUtf8("imageControl"));

        gridLayout->addWidget(imageControl, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QString::fromUtf8("menuFilter"));
        menuFilter->setEnabled(false);
        menuRed = new QMenu(menuFilter);
        menuRed->setObjectName(QString::fromUtf8("menuRed"));
        menuContrast = new QMenu(menuFilter);
        menuContrast->setObjectName(QString::fromUtf8("menuContrast"));
        menuBrightness = new QMenu(menuFilter);
        menuBrightness->setObjectName(QString::fromUtf8("menuBrightness"));
        menuBlue = new QMenu(menuFilter);
        menuBlue->setObjectName(QString::fromUtf8("menuBlue"));
        menuGreen = new QMenu(menuFilter);
        menuGreen->setObjectName(QString::fromUtf8("menuGreen"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName(QString::fromUtf8("menuImage"));
        menuImage->setEnabled(false);
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(arrowButton, selectionButton);
        QWidget::setTabOrder(selectionButton, squareButton);
        QWidget::setTabOrder(squareButton, buttonRectangle);
        QWidget::setTabOrder(buttonRectangle, buttonCircle);
        QWidget::setTabOrder(buttonCircle, ellipseButton);
        QWidget::setTabOrder(ellipseButton, lineButton);
        QWidget::setTabOrder(lineButton, triangleButton);
        QWidget::setTabOrder(triangleButton, isOutlineBox);
        QWidget::setTabOrder(isOutlineBox, isFillBox);
        QWidget::setTabOrder(isFillBox, buttonFronColor);
        QWidget::setTabOrder(buttonFronColor, buttonBackColor);
        QWidget::setTabOrder(buttonBackColor, scrollArea);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuBar->addAction(menuFilter->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFilter->addAction(actionBlur);
        menuFilter->addSeparator();
        menuFilter->addAction(menuBrightness->menuAction());
        menuFilter->addAction(menuContrast->menuAction());
        menuFilter->addSeparator();
        menuFilter->addAction(menuRed->menuAction());
        menuFilter->addAction(menuBlue->menuAction());
        menuFilter->addAction(menuGreen->menuAction());
        menuFilter->addSeparator();
        menuFilter->addAction(actionGrayscale);
        menuFilter->addAction(actionInvert_Colors);
        menuFilter->addAction(actionNegative);
        menuFilter->addSeparator();
        menuRed->addAction(actionIncrease_Red);
        menuRed->addAction(actionDecrease_Red);
        menuContrast->addAction(actionIncrease_Contrast);
        menuContrast->addAction(actionDecrease_Contrast);
        menuBrightness->addAction(actionIncrease_Brightness);
        menuBrightness->addAction(actionDecrease_Brightness);
        menuBlue->addAction(actionIncrease_Blue);
        menuBlue->addAction(actionDecrease_Blue);
        menuGreen->addAction(actionIncrease_Green);
        menuGreen->addAction(actionDecrease_Green);
        menuHelp->addAction(actionAbout);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuImage->addAction(actionResize);
        menuImage->addAction(actionCrop);
        menuImage->addSeparator();
        menuImage->addAction(actionRotate_90_Clockwise);
        menuImage->addAction(actionRotate_90_Anti_Clockwise);
        menuImage->addSeparator();
        menuImage->addAction(actionFlip_Horizontal);
        menuImage->addAction(actionFlip_Vertical);
        menuImage->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        zoomBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionBlur->setText(QApplication::translate("MainWindow", "Blur", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0, QApplication::UnicodeUTF8));
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionRotate_90_Clockwise->setText(QApplication::translate("MainWindow", "Rotate 90 Clockwise", 0, QApplication::UnicodeUTF8));
        actionRotate_90_Anti_Clockwise->setText(QApplication::translate("MainWindow", "Rotate 90 Anti Clockwise", 0, QApplication::UnicodeUTF8));
        actionResize->setText(QApplication::translate("MainWindow", "Resize", 0, QApplication::UnicodeUTF8));
        actionCrop->setText(QApplication::translate("MainWindow", "Crop", 0, QApplication::UnicodeUTF8));
        actionFlip_Horizontal->setText(QApplication::translate("MainWindow", "Flip Horizontal", 0, QApplication::UnicodeUTF8));
        actionFlip_Vertical->setText(QApplication::translate("MainWindow", "Flip Vertical", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionInvert_Colors->setText(QApplication::translate("MainWindow", "Invert Colors", 0, QApplication::UnicodeUTF8));
        actionGrayscale->setText(QApplication::translate("MainWindow", "Grayscale", 0, QApplication::UnicodeUTF8));
        actionNegative->setText(QApplication::translate("MainWindow", "Negative", 0, QApplication::UnicodeUTF8));
        actionIncrease_Red->setText(QApplication::translate("MainWindow", "Increase Red", 0, QApplication::UnicodeUTF8));
        actionDecrease_Red->setText(QApplication::translate("MainWindow", "Decrease Red", 0, QApplication::UnicodeUTF8));
        actionIncrease_Brightness->setText(QApplication::translate("MainWindow", "Increase Brightness", 0, QApplication::UnicodeUTF8));
        actionIncrease_Brightness->setShortcut(QApplication::translate("MainWindow", "Ctrl+PgUp", 0, QApplication::UnicodeUTF8));
        actionDecrease_Brightness->setText(QApplication::translate("MainWindow", "Decrease Brightness", 0, QApplication::UnicodeUTF8));
        actionDecrease_Brightness->setShortcut(QApplication::translate("MainWindow", "Ctrl+PgDown", 0, QApplication::UnicodeUTF8));
        actionIncrease_Contrast->setText(QApplication::translate("MainWindow", "Increase Contrast", 0, QApplication::UnicodeUTF8));
        actionDecrease_Contrast->setText(QApplication::translate("MainWindow", "Decrease Contrast", 0, QApplication::UnicodeUTF8));
        actionIncrease_Blue->setText(QApplication::translate("MainWindow", "Increase Blue", 0, QApplication::UnicodeUTF8));
        actionDecrease_Blue->setText(QApplication::translate("MainWindow", "Decrease Blue", 0, QApplication::UnicodeUTF8));
        actionIncrease_Green->setText(QApplication::translate("MainWindow", "Increase Green", 0, QApplication::UnicodeUTF8));
        actionDecrease_Green->setText(QApplication::translate("MainWindow", "Decrease Green", 0, QApplication::UnicodeUTF8));
        toolBox->setTitle(QApplication::translate("MainWindow", "ToolBox", 0, QApplication::UnicodeUTF8));
        isFillBox->setText(QApplication::translate("MainWindow", "Fill", 0, QApplication::UnicodeUTF8));
        isOutlineBox->setText(QApplication::translate("MainWindow", "Outline", 0, QApplication::UnicodeUTF8));
        arrowButton->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
        selectionButton->setText(QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8));
        squareButton->setText(QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8));
        buttonRectangle->setText(QApplication::translate("MainWindow", "Rectangle", 0, QApplication::UnicodeUTF8));
        buttonCircle->setText(QApplication::translate("MainWindow", "Circle", 0, QApplication::UnicodeUTF8));
        ellipseButton->setText(QApplication::translate("MainWindow", "Ellipse", 0, QApplication::UnicodeUTF8));
        lineButton->setText(QApplication::translate("MainWindow", "Line", 0, QApplication::UnicodeUTF8));
        triangleButton->setText(QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8));
        zoomBox->clear();
        zoomBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "400%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "300%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "200%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "100%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "90%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "70%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "50%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "20%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "10%", 0, QApplication::UnicodeUTF8)
        );
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuFilter->setTitle(QApplication::translate("MainWindow", "&Filter", 0, QApplication::UnicodeUTF8));
        menuRed->setTitle(QApplication::translate("MainWindow", "Red", 0, QApplication::UnicodeUTF8));
        menuContrast->setTitle(QApplication::translate("MainWindow", "Contrast", 0, QApplication::UnicodeUTF8));
        menuBrightness->setTitle(QApplication::translate("MainWindow", "Brightness", 0, QApplication::UnicodeUTF8));
        menuBlue->setTitle(QApplication::translate("MainWindow", "Blue", 0, QApplication::UnicodeUTF8));
        menuGreen->setTitle(QApplication::translate("MainWindow", "Green", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuImage->setTitle(QApplication::translate("MainWindow", "&Image", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
