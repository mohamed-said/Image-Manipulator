#ifndef COLORBUTTON_H
#define COLORBUTTON_H

#include <QPushButton>
#include <QColor>

class ColorButton : public QPushButton
{
    Q_OBJECT

public:
    explicit ColorButton(QWidget *parent = 0);
    ~ColorButton();

    QColor getColor();
    void setColor(QColor color);

signals:
    void ColorChanged(QColor);

private slots:
    void openColor();

private:
    QColor color;
};

#endif // COLORBUTTON_H
