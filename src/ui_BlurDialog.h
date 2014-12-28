/********************************************************************************
** Form generated from reading UI file 'BlurDialog.ui'
**
** Created: Sun 23. Dec 17:51:54 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLURDIALOG_H
#define UI_BLURDIALOG_H

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

class Ui_BlurDialog
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *valueLabel;

    void setupUi(QDialog *BlurDialog)
    {
        if (BlurDialog->objectName().isEmpty())
            BlurDialog->setObjectName(QString::fromUtf8("BlurDialog"));
        BlurDialog->resize(400, 100);
        buttonBox = new QDialogButtonBox(BlurDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 18, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalSlider = new QSlider(BlurDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 43, 201, 31));
        horizontalSlider->setMinimum(2);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(1);
        label = new QLabel(BlurDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 121, 16));
        valueLabel = new QLabel(BlurDialog);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(100, 70, 51, 16));

        retranslateUi(BlurDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BlurDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BlurDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BlurDialog);
    } // setupUi

    void retranslateUi(QDialog *BlurDialog)
    {
        BlurDialog->setWindowTitle(QApplication::translate("BlurDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BlurDialog", "Blur Strength", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BlurDialog: public Ui_BlurDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLURDIALOG_H
