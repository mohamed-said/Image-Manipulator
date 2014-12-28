/********************************************************************************
** Form generated from reading UI file 'ImageControl.ui'
**
** Created: Sun 23. Dec 17:51:54 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGECONTROL_H
#define UI_IMAGECONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageControl
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *ImageControl)
    {
        if (ImageControl->objectName().isEmpty())
            ImageControl->setObjectName(QString::fromUtf8("ImageControl"));
        ImageControl->resize(581, 355);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(ImageControl->sizePolicy().hasHeightForWidth());
        ImageControl->setSizePolicy(sizePolicy);
        ImageControl->setMinimumSize(QSize(10, 10));
        gridLayout = new QGridLayout(ImageControl);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        retranslateUi(ImageControl);

        QMetaObject::connectSlotsByName(ImageControl);
    } // setupUi

    void retranslateUi(QWidget *ImageControl)
    {
        ImageControl->setWindowTitle(QApplication::translate("ImageControl", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageControl: public Ui_ImageControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGECONTROL_H
