#ifndef IMAGEEFFECT_H
#define IMAGEEFFECT_H

#include <QImage>
#include <QColor>
#include <utility>
#include <QRect>

#include "imagemask.h"

class ImageEffect {

private:
        QImage* image;
        ImageMask mask;
        QRect Region;
        
		void BorderBlur(QImage* image, int radius, QRect rect);
public:
        void setRegion(QRect Region);

        ImageEffect(QImage *image);

        QImage* crop(QRect r);
        QImage* rotateClockwise();
        QImage* rotateAntiClockwise();
        QImage* resize(QSize newSize);

        QImage* flipHorizontal();
        QImage* flipVertical();
        QImage* brightness(int value);
        QImage* grayscale();
        QImage* contrast(int value);
        QImage* red(int value);
        QImage* green(int value);
        QImage* blue(int value);
        QImage* invert();
        QImage* negative();

        QImage* blur(int radius);
};

#endif // IMAGEEFFECT_H
