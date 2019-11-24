/********************************************************************************
** Form generated from reading UI file 'inputframeswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFRAMESWINDOW_H
#define UI_INPUTFRAMESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputFramesWindow
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainVL;
    QPushButton *showOutputPB;

    void setupUi(QWidget *InputFramesWindow)
    {
        if (InputFramesWindow->objectName().isEmpty())
            InputFramesWindow->setObjectName(QString::fromUtf8("InputFramesWindow"));
        InputFramesWindow->resize(490, 602);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputFramesWindow->sizePolicy().hasHeightForWidth());
        InputFramesWindow->setSizePolicy(sizePolicy);
        label = new QLabel(InputFramesWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 301, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(InputFramesWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 90, 261, 471));
        mainVL = new QVBoxLayout(verticalLayoutWidget);
        mainVL->setObjectName(QString::fromUtf8("mainVL"));
        mainVL->setSizeConstraint(QLayout::SetNoConstraint);
        mainVL->setContentsMargins(0, 0, 0, 0);
        showOutputPB = new QPushButton(InputFramesWindow);
        showOutputPB->setObjectName(QString::fromUtf8("showOutputPB"));
        showOutputPB->setEnabled(true);
        showOutputPB->setGeometry(QRect(320, 280, 122, 28));
        showOutputPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"	padding: 4px;\n"
"    border-radius:  6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"	font: large \"Arial\";\n"
"	margin-left: 30px;\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none;\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy;\n"
"}\n"
""));

        retranslateUi(InputFramesWindow);

        QMetaObject::connectSlotsByName(InputFramesWindow);
    } // setupUi

    void retranslateUi(QWidget *InputFramesWindow)
    {
        InputFramesWindow->setWindowTitle(QApplication::translate("InputFramesWindow", "Form", nullptr));
        label->setText(QApplication::translate("InputFramesWindow", "Identify frames where errors will occur:", nullptr));
        showOutputPB->setText(QApplication::translate("InputFramesWindow", "Show Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputFramesWindow: public Ui_InputFramesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFRAMESWINDOW_H
