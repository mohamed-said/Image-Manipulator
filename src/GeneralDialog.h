#ifndef GENERALDIALOG_H
#define GENERALDIALOG_H

#include <QDialog>

namespace Ui {
    class GeneralDialog;
}

class GeneralDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GeneralDialog(QWidget *parent = 0);
    ~GeneralDialog();

    static int OpenGeneralDialog(QString filterName, QWidget* parent);

private:
    Ui::GeneralDialog *ui;
};

#endif // GENERALDIALOG_H
