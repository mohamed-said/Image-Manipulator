#ifndef IMAGEDRAWER_H4
#define IMAGEDRAWER_H

#include <QImage>
#include <QColor>
#include <QRect>
#include <QPoint>
#include <cmath>
#include <algorithm>

class ImageDrawer
{
private:
		QImage* image;
        bool Outline;
        bool Filled;
        QColor frontColor;
        QColor backColor;

        QRgb Pixel(int x, int y);
        void setPixel(int x, int y, QRgb);

public:
        ImageDrawer(QImage *image);
        void DrawLine(QPoint p1, QPoint p2);
        void DrawRect(QRect rect);
        void DrawEllipse(QRect rect);
        void DrawTriangle(QRect rect);


        void setOutline(bool value);
        void setFilled(bool value);
        void setBackColor(QColor color);
        void setFrontColor(QColor color);

};

#endif // IMAGEDRAWER_H
