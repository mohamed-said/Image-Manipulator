#include "ColorButton.h"

#include <QColorDialog>

ColorButton::ColorButton(QWidget *parent) :
    QPushButton(parent)
{
    this->connect(this, SIGNAL(clicked()), SLOT(openColor()));
}

ColorButton::~ColorButton()
{
}

void ColorButton::openColor(){
    QColor color = QColorDialog::getColor(this->color, this,
                                          tr("Choose Color"));

    if(color.isValid())
        setColor(color);
}

QColor ColorButton::getColor(){
    return color;
}


void ColorButton::setColor(QColor color)
{
    this->color = color;
    QPixmap buttonPixamap(this->width()-4, this->height()-4);
    buttonPixamap.fill(color);

    QIcon buttonIcon(buttonPixamap);
    this->setIcon(buttonIcon);
    this->setIconSize(buttonPixamap.size());

    ColorChanged(color);
}
