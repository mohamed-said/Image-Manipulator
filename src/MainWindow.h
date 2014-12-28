#ifndef MAINWINDOW_H4
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QLabel>
#include <QCursor>

#include "resizedialog.h"
#include "imagecontrol.h"
#include "blurdialog.h"

namespace Ui {
    class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void FilterMenuHandler(QAction* action);
    void ImageMenuHandler(QAction* action);

    void newfile();
    void open();
    void save();
    void saveas();
    void exit();

    void about();

    void ZoomChanged(QString str);

    void setDrawRectangle();
    void setDrawCircle();
    void setDrawSelection();
    void setDrawLine();
    void setDrawEllipse();
    void setDrawTriangle();
    void setDrawSquare();
    void setDrawNothing();

private:
    Ui::MainWindow *ui;
    QString FileName;
};

#endif // MAINWINDOW_H

