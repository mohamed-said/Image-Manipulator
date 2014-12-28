#ifndef IMAGECONTROL_H
#define IMAGECONTROL_H

#include "ImageDrawer.h"
#include "imageeffect.h"

#include <QWidget>
#include <QVector>

namespace Ui {
    class ImageControl;
}

class ImageControl : public QWidget
{
    Q_OBJECT

public:
        enum DrawModes
        {
            DrawModes_Selection,
            DrawModes_Circle,
            DrawModes_Rectanlge,
            DrawModes_Square,
            DrawModes_Line,
            DrawModes_Triangle,
            DrawModes_Ellipse,
            DrawModes_None
        };

        explicit ImageControl(QWidget *parent = 0);
        ~ImageControl();

        QImage* getImage();
        void setImage(QImage*);

        float getZoomLevel();
        void setZoomLevel(float);

        DrawModes getDrawingMode();
        void SetDrawingMode(DrawModes);

        void clearSelection();

        QString getFileName();
        QRect CurrentSelection();

        bool isReady();
        void update();
private:
        Ui::ImageControl *ui;
        QString filename;

        QVector<QImage*> HistoryImages;
        int currentImageIndex;

        float zoomLevel;

        bool Outline;
        bool Filled;
        QColor frontColor;
        QColor backColor;

        bool DrawMode_Started;
        DrawModes DrawMode;
        QImage DrawMode_FillImage;
        QPoint DrawMode_StartPoint;
        QPoint DrawMode_CurrentPoint;

        void paintEvent(QPaintEvent *);
        void mousePressEvent(QMouseEvent* event);
        void mouseMoveEvent(QMouseEvent* event);
        void mouseReleaseEvent(QMouseEvent* event);

        void DrawShape(QImage* image, QRect r);

        void updateStatus();

public slots:
        void undo();
        void redo();

        void setOutline(bool value);
        void setFilled(bool value);
        void setBackColor(QColor color);
        void setFrontColor(QColor color);

signals:
        void canUndoChanged(bool);
        void canRedoChanged(bool);
        void isReadyChanged(bool);

};

#endif // IMAGECONTROL_H
