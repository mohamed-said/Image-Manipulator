#ifndef RESIZEDIALOG_H
#define RESIZEDIALOG_H

#include <QDialog>

namespace Ui {
    class ResizeDialog;
}

class ResizeDialog : public QDialog
{
    Q_OBJECT

    QSize OriginalDimentions;

public:
    explicit ResizeDialog(QSize OriginalSize, QWidget *parent = 0);

    QSize getDimentions();

    static QSize OpenResizeDialog (QSize OriginalSize, QWidget* parent);


    ~ResizeDialog();

private:
    Ui::ResizeDialog *ui;
};

#endif // RESIZEDIALOG_H
