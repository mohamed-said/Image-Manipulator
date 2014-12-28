/********************************************************************************
** Form generated from reading UI file 'colorbutton.ui'
**
** Created: Sat 22. Dec 14:55:28 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORBUTTON_H
#define UI_COLORBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorButton
{
public:

    void setupUi(QWidget *ColorButton)
    {
        if (ColorButton->objectName().isEmpty())
            ColorButton->setObjectName(QString::fromUtf8("ColorButton"));
        ColorButton->resize(400, 300);

        retranslateUi(ColorButton);

        QMetaObject::connectSlotsByName(ColorButton);
    } // setupUi

    void retranslateUi(QWidget *ColorButton)
    {
        ColorButton->setWindowTitle(QApplication::translate("ColorButton", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorButton: public Ui_ColorButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORBUTTON_H
