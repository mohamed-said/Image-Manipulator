#ifndef BLURDIALOG_H
#define BLURDIALOG_H

#include <QDialog>

namespace Ui {
    class BlurDialog;
}

class BlurDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BlurDialog(QWidget *parent = 0);

    int getValue();

    static int OpenBlurDialog(QWidget* parent)
    {
        BlurDialog a(parent);

        if(a.exec() == QDialog::Accepted)
            return a.getValue();

        return -1;
    }

    ~BlurDialog();

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::BlurDialog *ui;
};

#endif // BLURDIALOG_H
