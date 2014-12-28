#include "ResizeDialog.h"
#include "ui_resizedialog.h"
#include <QSize>

ResizeDialog::ResizeDialog(QSize OriginalDimentions , QWidget *parent) : QDialog(parent), ui(new Ui::ResizeDialog) {
    ui->setupUi(this);
    ui->HeightTextBox->setValue(OriginalDimentions.height());
    ui->WidthTextBox->setValue(OriginalDimentions.width());
    this->OriginalDimentions = OriginalDimentions;
}


QSize ResizeDialog::OpenResizeDialog (QSize OriginalSize, QWidget* parent) {
    ResizeDialog R(OriginalSize, parent);

    if(R.exec() == QDialog::Accepted)
        return R.getDimentions();

    return R.OriginalDimentions;
}

ResizeDialog::~ResizeDialog()
{
    delete ui;
}

QSize ResizeDialog::getDimentions() {
    QSize N;
    N.setHeight(ui->HeightTextBox->value());
    N.setWidth(ui->WidthTextBox->value());
    return N;
}
