#include "blurdialog.h"
#include "ui_blurdialog.h"

BlurDialog::BlurDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BlurDialog)
{
    ui->setupUi(this);
    on_horizontalSlider_valueChanged(2);
}

BlurDialog::~BlurDialog()
{
    delete ui;
}

int BlurDialog::getValue()
{
    return ui->horizontalSlider->value();
}

void BlurDialog::on_horizontalSlider_valueChanged(int value)
{
    this->ui->valueLabel->setText(QString::number(value));
}
