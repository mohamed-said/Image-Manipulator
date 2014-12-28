#include "GeneralDialog.h"
#include "ui_GeneralDialog.h"

GeneralDialog::GeneralDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneralDialog)
{
    ui->setupUi(this);

    connect(ui->valueSlider, SIGNAL(valueChanged(int)), ui->valueLabel, SLOT(setNum(int)));

    ui->valueSlider->setValue(0);
}

int GeneralDialog::OpenGeneralDialog(QString filterName, QWidget* parent){

    GeneralDialog gd(parent);
    gd.ui->filterLabel->setText(filterName);

    if(gd.exec() == QDialog::Accepted)
        return gd.ui->valueSlider->value();

    return 0;
}

GeneralDialog::~GeneralDialog()
{
    delete ui;
}
