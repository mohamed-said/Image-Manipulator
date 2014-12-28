#include "imageeffect.h"
#include <QColor>

ImageEffect::ImageEffect(QImage *image){
    this->image = image;
}

QImage* ImageEffect::negative(){
    QImage* image = new QImage(*this->image);

    int w = image->width();
    int h = image->height();
    QColor pixel_RGB;

    for(int i = Region.x() ;i < Region.x() + Region.width(); i++){
        for(int j=Region.y();j<Region.y()+Region.height();j++){
            pixel_RGB.setRgb(image->pixel(i,j));
            int r = 255 - pixel_RGB.red();
            int g = 255 - pixel_RGB.green();
            int b = 255 - pixel_RGB.blue();

            int NEW = (r + g + b) / 3;
            QColor new_pixel_RGB;
            new_pixel_RGB.setRgb(NEW, NEW, NEW);
            image->setPixel(i,j,new_pixel_RGB.rgb());
        }
    }

    return image;
}

QImage* ImageEffect::invert(){
    QImage* image = new QImage(*this->image);

    int w = image->width();
    int h = image->height();
    QColor pixel_RGB;

    for(int i = Region.x();i < Region.x() + Region.width(); i++){
        for(int j = Region.y(); j < Region.y() + Region.height(); j++){
            pixel_RGB.setRgb(image->pixel(i, j));
            int r=255-pixel_RGB.red();
            int g=255-pixel_RGB.green();
            int b=255-pixel_RGB.blue();

            image->setPixel(i,j,qRgb(r, g, b));
        }
    }
    return image;
}

QImage* ImageEffect::grayscale() {
    QImage* image = new QImage(*this->image);

    int w = image->width();
    int h = image->height();
    QColor pixel_RGB;
    for(int i=Region.x();i<Region.x()+Region.width();i++){
        for(int j=Region.y();j<Region.y()+Region.height();j++){
            pixel_RGB.setRgb(image->pixel(i,j));
            //int grey=int((pixel_RGB.red()*0.3)+(pixel_RGB.green()*0.59)+(pixel_RGB.blue()*0.11));
            int grey = int((pixel_RGB.red() + pixel_RGB.green() + pixel_RGB.blue()) / 3);
            pixel_RGB.setRgb(grey,grey,grey);
            image->setPixel(i, j, pixel_RGB.rgb());
        }
    }
    return image;
}


///////////////////////////////////////////////////////////////
QImage* ImageEffect::brightness(int value) {
    QImage* image = new QImage(*this->image);

    int R, G, B;
    for(int i=Region.x();i<Region.x()+Region.width();i++){
        for(int j=Region.y();j<Region.y()+Region.height();j++){

            QRgb color = image->pixel(i, j);
            R = qRed(color);
            G = qGreen(color);
            B = qBlue(color);

            R += value;
            if(R>255)
                R=255;
            else if(R<0)
                R=0;

            G += value;
            if(G>255)
                G=255;
            else if(G<0)
                G=0;

            B += value;
            if(B>255)
                B=255;
            else if(B<0)
                B=0;

            image->setPixel(i, j , qRgb(R, G, B));
        }
    }
    return image;
}

QImage* ImageEffect::contrast(int value){
    QImage* image = new QImage(*this->image);

    double f = double(259*(value+255)) / double(255*(259-value));  // 7aga esmaha correction factor
    int w = image->width();
    int h = image->height();
    QColor pixel_RGB;

    for(int i=Region.x();i<Region.x()+Region.width();i++){
        for(int j=Region.y();j<Region.y()+Region.height();j++){
            pixel_RGB.setRgb(image->pixel(i,j));
            int r=(f*(pixel_RGB.red()-128))+128;
            int g=(f*(pixel_RGB.green()-128))+128;
            int b=(f*(pixel_RGB.blue()-128))+128;

            pixel_RGB.setRgb(r,g,b);
            image->setPixel(i,j,pixel_RGB.rgb());
        }
    }
    return image;
}

QImage* ImageEffect::red(int value){
    
	int w=image->width();
    int h=image->height();
    QColor pixel_RGB;

    for(int i=Region.x();i<Region.x()+Region.width();i++){
        for(int j=Region.y();j<Region.y()+Region.height();j++){
            pixel_RGB.setRgb(image->pixel(i,j));
            int g=pixel_RGB.green()-value;
            int b=pixel_RGB.blue()-value;

            if(g>255)
                g=255;
            else if(g<0)
                g=0;

            if(b>255)
                b=255;
            else if(b<0)
                b=0;

            pixel_RGB.setGreen(g);
            pixel_RGB.setBlue(b);
            image->setPixel(i,j,pixel_RGB.rgb());
        }
    }
    return image;
}

void ImageEffect::setRegion(QRect Region){
    this->Region = Region;
}

QImage* ImageEffect::green(int value){
    QImage* image = new QImage(*this->image);

    int w=image->width();
    int h=image->height();
    QColor pixel_RGB;

    for(int i=Region.x();i<Region.x()+Region.width();i++){
        for(int j=Region.y();j<Region.y()+Region.height();j++){
            pixel_RGB.setRgb(image->pixel(i,j));
            int r=pixel_RGB.red()-value;
            int b=pixel_RGB.blue()-value;

            if(r>255)
                r=255;
            else if(r<0)
                r=0;

            if(b>255)
                b=255;
            else if(b<0)
                b=0;

            pixel_RGB.setRed(r);
            pixel_RGB.setBlue(b);
            image->setPixel(i,j,pixel_RGB.rgb());
        }
    }
    return image;
}


QImage* ImageEffect::blue(int value){
    int w=image->width();
    int h=image->height();
    QColor pixel_RGB;

    for(int i=Region.x();i<Region.width();i++){
        for(int j=Region.y();j<Region.height();j++){
            pixel_RGB.setRgb(image->pixel(i,j));
            int r=pixel_RGB.red()-value;
            int g=pixel_RGB.green()-value;

            if(r>255)
                r=255;
            else if(r<0)
                r=0;

            if(g>255)
                g=255;
            else if(g<0)
                g=0;

            pixel_RGB.setRed(r);
            pixel_RGB.setGreen(g);
            image->setPixel(i,j,pixel_RGB.rgb());
        }
    }
    return image;
}


QImage* ImageEffect::resize(QSize newSize){
    return new QImage(image->scaled(newSize));
}

QImage* ImageEffect::rotateClockwise() {
    int old_width = image->width();
    int old_height = image->height();

    QImage *temp_img = new QImage(old_height, old_width, image->format());

    for(int i = 0; i < old_width; i++) {
        for(int j=0;j<old_height;j++)
            temp_img->setPixel(j, old_width - 1 - i, image->pixel(i,j));
    }
    return temp_img;
}


QImage* ImageEffect::rotateAntiClockwise(){
    int old_width = image->width();
    int old_height = image->height();

    QImage *temp_img = new QImage(old_height, old_width, image->format());


    for(int i = 0; i < old_width; i++) {
        for(int j = 0; j < old_height; j++) {
            temp_img->setPixel(old_height - 1 - j, i, image->pixel(i,j));
        }
    }

    return temp_img;
}
/////////////////////////////////////////////////////////////////////////////////////

QImage* ImageEffect::flipHorizontal() {
    
	QImage* image = new QImage(*this->image);

    for (int y = 0; y < image->height(); y++) {
        for (int x = 0; x < image->width()/2; x++) {
            //
            int XInverted = (image->width() -1) - x;
            //int YInverted = image->height();

            QRgb temp = image->pixel(XInverted, y);

            image->setPixel(XInverted, y, image->pixel(x, y));

            image->setPixel(x, y, temp);
        }
    }
    return image;
}


QImage* ImageEffect::flipVertical(){
    QImage* image = new QImage(*this->image);

    for (int y = 0; y < image->height()/2; y++) {
        for (int x = 0; x < image->width(); x++) {
            //
            int YInverted = (image->height()-1) - y;

            QRgb temp = image->pixel(x, YInverted);

            image->setPixel(x, YInverted, image->pixel(x, y));

            image->setPixel(x, y, temp);
        }
    }
    return image;
}

QImage* ImageEffect::crop(QRect r){
    return new QImage(image->copy(r));
}

QImage* ImageEffect::blur(int radius) {
    QImage* image = new QImage(*this->image);

    mask.genBlur(radius);
    int dimention = mask.getDim();
    int half_dim = int(dimention/2);
    int coeff = mask.getCo();

    for(int i=Region.x()+half_dim;i<=(Region.x()+Region.width())-half_dim;i++) {
        for(int j=Region.y()+half_dim;j<=(Region.y()+Region.height())-half_dim;j++) {

            uint sumR=0;
            uint sumG=0;
            uint sumB=0;
            QColor pixel_RGB;

            for(int k=0;k<dimention;k++) {
                for(int m=0;m<dimention;m++) {
                    pixel_RGB.setRgb(image->pixel((i-half_dim+k),(j-half_dim+m)));
                    sumR+=((pixel_RGB.red())*mask[k][m]);
                    sumG+=((pixel_RGB.green())*mask[k][m]);
                    sumB+=((pixel_RGB.blue())*mask[k][m]);
                }
            }

            sumR=uint(sumR/coeff);
            sumG=uint(sumG/coeff);
            sumB=uint(sumB/coeff);
            pixel_RGB.setRgb(sumR,sumG,sumB);
            image->setPixel(i,j,pixel_RGB.rgb());
        }
    }


    //if(radius>5) // so we have max 5 pixels unblured on the border
    //    BorderBlur(image, radius,rect);

    return image;
}

void ImageEffect::BorderBlur(QImage* image, int radius, QRect rect) {
    // will perform gradual blur on the border by decrementing the radius by one for each frame level
    // leaving 5 pixels unblured

    for(--radius;radius>4;radius--) {
        mask.genBlur(radius);
        int dimention=mask.getDim();
        int half_dim=int(dimention/2);
        int coeff=mask.getCo();

        for(int i=rect.x()+half_dim;i<=(rect.x()+rect.width())-half_dim;i++) {
            for(int j=rect.y()+half_dim;j<=(rect.y()+rect.height())-half_dim;) {
                uint sumR=0;
                uint sumG=0;
                uint sumB=0;
                QColor pixel_RGB;
                for(int k=0;k<dimention;k++) {
                    for(int m=0;m<dimention;m++) {
                        pixel_RGB.setRgb(image->pixel((i-half_dim+k),(j-half_dim+m)));
                        sumR+=(pixel_RGB.red()*mask[k][m]);
                        sumG+=(pixel_RGB.green()*mask[k][m]);
                        sumB+=(pixel_RGB.blue()*mask[k][m]);
                    }
                }
                sumR=uint(sumR/coeff);
                sumG=uint(sumG/coeff);
                sumB=uint(sumB/coeff);
                pixel_RGB.setRgb(sumR,sumG,sumB);
                image->setPixel(i,j,pixel_RGB.rgb());

                if((i==rect.x()+half_dim)||(i==((rect.x()+rect.width())-half_dim)))
                    j++;
                else
                    j+=(rect.height()-dimention);
            }
        }
    }
}
