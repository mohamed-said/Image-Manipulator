/********************************************************************************
** Form generated from reading UI file 'ResizeDialog.ui'
**
** Created: Mon 24. Dec 14:08:14 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZEDIALOG_H
#define UI_RESIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ResizeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *HeightTextBox;
    QSpinBox *WidthTextBox;

    void setupUi(QDialog *ResizeDialog)
    {
        if (ResizeDialog->objectName().isEmpty())
            ResizeDialog->setObjectName(QString::fromUtf8("ResizeDialog"));
        ResizeDialog->resize(401, 89);
        buttonBox = new QDialogButtonBox(ResizeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ResizeDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(18, 23, 51, 16));
        label_2 = new QLabel(ResizeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(17, 50, 51, 16));
        HeightTextBox = new QSpinBox(ResizeDialog);
        HeightTextBox->setObjectName(QString::fromUtf8("HeightTextBox"));
        HeightTextBox->setGeometry(QRect(100, 20, 141, 22));
        HeightTextBox->setMaximum(1000000000);
        WidthTextBox = new QSpinBox(ResizeDialog);
        WidthTextBox->setObjectName(QString::fromUtf8("WidthTextBox"));
        WidthTextBox->setGeometry(QRect(101, 50, 141, 22));
        WidthTextBox->setMaximum(1000000000);

        retranslateUi(ResizeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ResizeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ResizeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResizeDialog);
    } // setupUi

    void retranslateUi(QDialog *ResizeDialog)
    {
        ResizeDialog->setWindowTitle(QApplication::translate("ResizeDialog", "ProjFinal_ImageManipulatorAndPaint_20110320_20110298_20110342", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ResizeDialog", "Height", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ResizeDialog", "Width", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ResizeDialog: public Ui_ResizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZEDIALOG_H
