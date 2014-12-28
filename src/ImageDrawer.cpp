#include "imagedrawer.h"

#include <QDebug>

ImageDrawer::ImageDrawer(QImage *image)
{
    this->image = image;
}

void ImageDrawer::DrawLine(QPoint p1, QPoint p2){
    if(p1.x() != p2.x()) {
       double slope = double(p1.y() - p2.y()) / double(p1.x() - p2.x());
       double c = p1.y() - (p1.x()*slope);

       if(p1.x() > p2.x())
           qSwap(p1,p2);

       for(double i = double(p1.x()); i <= double(p2.x()); i += 0.001) {
            int j = int((slope * i) + c);
            this->setPixel(int(i), j, frontColor.rgb());
       }
    } else {
        int x = p1.x();
        if(p1.y() > p2.y())
            qSwap(p1, p2);
        for(int i = p1.y(); i<= p2.y(); i++) {
            this->setPixel(x, i, frontColor.rgb());
        }
    }
}

void ImageDrawer::setOutline(bool value){
    this->Outline = value;
}
void ImageDrawer::setFilled(bool value){
    this->Filled = value;
}

void ImageDrawer::setBackColor(QColor color){
    this->backColor = color;
}

void ImageDrawer::setFrontColor(QColor color){
    this->frontColor = color;
}

void ImageDrawer::DrawRect(QRect rect){
    //qDebug() << "X: " << rect.x() << " Left: " << (rect.left());

    for (int i = rect.x(); i <= (rect.x() + rect.width()); i++) {
        for (int j = rect.y(); j <= (rect.y() + rect.height()); j++) {
            if( (i == rect.x() || i == (rect.x() + rect.width()) || j == rect.y() || j == (rect.y()+rect.height())) && Outline)
                this->setPixel(i, j, frontColor.rgb());
            else if(Filled)
                this->setPixel(i, j, backColor.rgb());
        }
    }
}

void ImageDrawer::DrawEllipse(QRect rect){

    if((rect.width() > 1) && (rect.height() > 1)) {
       double a = rect.width() / 2;
       double b = rect.height() / 2;

       QPoint center;

       center.setX(rect.left() + a);
       center.setY(rect.top() + b);
       
	   if(Outline) {
           for (double x = (a * -1); x <= a; x += 0.001) {

               //int y =sqrt((1+(x*x)/(a*a))*b*b);      draws hyperpola

               int y = sqrt((1 - (x * x) / (a * a)) * (b * b));

               QPoint p1 = center, p2 = center;

               p1.rx() += x;
               p1.ry() += y;

               p2.rx() += x;
               p2.ry() -= y;

               this->setPixel(p1.x(), p1.y(), frontColor.rgb());
               this->setPixel(p2.x(), p2.y(), frontColor.rgb());
            }
        }
		
        if((Filled)&&(rect.width()>2)&&(rect.height()>2)) {
           qSwap(frontColor, backColor);
           for(double x=(a*-1)+1; x<(a); x++){

               int y =sqrt((1-(x*x)/(a*a))*(b*b));

               QPoint p1 = center,
                      p2 = center;

               if(x>0)
                 p1.rx() += (int(x)-1);
               else
                 p1.rx() += x;
               p1.ry() += y;

               if(x>0)
                 p2.rx() += (int(x)-1);
               else
                 p2.rx() += x;
               p2.ry() -= y;

               p1.ry()--;
               p2.ry()++;

               DrawLine(p1,p2);
           }

           qSwap(frontColor, backColor);
        }
    }
}

void ImageDrawer::DrawTriangle(QRect rect){
    
	int w_midpoint = int(rect.width()/2);

    QPoint p1(rect.topLeft());
    QPoint p2(rect.bottomLeft());
    QPoint p3(rect.bottomRight());

    p1.setX(p1.x() + w_midpoint);

    //QPoint p1(rect.x()+w_midpoint,rect.y());
    //QPoint p2(rect.x(),rect.y()+rect.height());
    //QPoint p3(rect.x()+rect.width(),rect.y()+rect.height());

    if(Outline) {
        DrawLine(p1,p2);
        DrawLine(p1,p3);
        DrawLine(p2,p3);
    }

    if(Filled) {
        
		double slope1;
        double slope2;
        double c1;
        double c2;

        if ((p1.x() != p2.x()) && (p1.x() != p3.x())) {
           slope1 = double(p1.y() - p2.y()) / double(p1.x() - p2.x());
           c1 = p1.y() - (p1.x() * slope1);

           slope2 = double(p1.y() - p3.y()) / double(p1.x() - p3.x());
           c2 = p1.y() - (p1.x() * slope2);

           for(int j = p2.y() - 1; j >= p1.y(); j--) {
               for(int i = (int((j - c1) / slope1) + 1); i < (int((j - c2) / slope2)); i++) {
                  this->setPixel(i, j, backColor.rgb());
               }
           }
        }
    }
}

QRgb ImageDrawer::Pixel(int x, int y){
    if (0 <= x && x < image->width() && 0 <= y && y < image->height())
        return image->pixel(x, y);

    return 0;
}

void ImageDrawer::setPixel(int x, int y, QRgb rgb){
    if( 0 <= x && x <image->width() && 0 <= y && y < image->height())
        image->setPixel(x, y, rgb);
}
