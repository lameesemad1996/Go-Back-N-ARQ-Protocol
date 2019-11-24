/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Output
{
public:

    void setupUi(QWidget *Output)
    {
        if (Output->objectName().isEmpty())
            Output->setObjectName(QString::fromUtf8("Output"));
        Output->resize(490, 565);

        retranslateUi(Output);

        QMetaObject::connectSlotsByName(Output);
    } // setupUi

    void retranslateUi(QWidget *Output)
    {
        Output->setWindowTitle(QApplication::translate("Output", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Output: public Ui_Output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
