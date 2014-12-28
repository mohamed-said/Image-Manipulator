/********************************************************************************
** Form generated from reading UI file 'GeneralDialog.ui'
**
** Created: Sun 23. Dec 17:51:54 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALDIALOG_H
#define UI_GENERALDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_GeneralDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *filterLabel;
    QSlider *valueSlider;
    QLabel *valueLabel;

    void setupUi(QDialog *GeneralDialog)
    {
        if (GeneralDialog->objectName().isEmpty())
            GeneralDialog->setObjectName(QString::fromUtf8("GeneralDialog"));
        GeneralDialog->resize(510, 118);
        buttonBox = new QDialogButtonBox(GeneralDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(410, 20, 81, 71));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        filterLabel = new QLabel(GeneralDialog);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setGeometry(QRect(30, 10, 71, 21));
        valueSlider = new QSlider(GeneralDialog);
        valueSlider->setObjectName(QString::fromUtf8("valueSlider"));
        valueSlider->setGeometry(QRect(30, 40, 321, 41));
        valueSlider->setMinimum(-255);
        valueSlider->setMaximum(255);
        valueSlider->setSingleStep(1);
        valueSlider->setOrientation(Qt::Horizontal);
        valueSlider->setInvertedAppearance(false);
        valueSlider->setTickPosition(QSlider::TicksBelow);
        valueLabel = new QLabel(GeneralDialog);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(170, 83, 41, 20));
        valueLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(GeneralDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GeneralDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GeneralDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GeneralDialog);
    } // setupUi

    void retranslateUi(QDialog *GeneralDialog)
    {
        GeneralDialog->setWindowTitle(QApplication::translate("GeneralDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        filterLabel->setText(QApplication::translate("GeneralDialog", "[EFFECT NAME]", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QApplication::translate("GeneralDialog", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GeneralDialog: public Ui_GeneralDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALDIALOG_H
