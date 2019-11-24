#include "inputframeswindow.h"
#include "ui_inputframeswindow.h"
#include"mainwindow.h"
#include"QLabel"
#include "QCheckBox"
#include<string>
#include "QScrollArea"
#include"QVBoxLayout"
#include "QHBoxLayout"
#include "QSizePolicy"
#include <list>
#include <iterator>
#include <output.h>
#include "QDebug"
using namespace std;

InputFramesWindow* InputFramesWindow::s_instance = nullptr;

InputFramesWindow* InputFramesWindow::instance() { return s_instance; }

InputFramesWindow::InputFramesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputFramesWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Frames Window");
    assert(!s_instance); //another instance already exists!
    s_instance = this;

//    mainArea->show();
//    mainArea->setWidget(this);

    ui->mainVL->setSizeConstraint(QLayout::SetMinimumSize);
    int noOfFrames = MainWindow::instance()->noOfFrames;

    for (int i = 0; i < noOfFrames; i++)
    {
        QHBoxLayout *newlayout = new QHBoxLayout;

        QLabel *newlabel = new QLabel;
        newlabel->setText(QString::number(i+1));

        QCheckBox *newbox = new QCheckBox;
        listOfCheckBoxPtrs.push_back(newbox);

        newlayout->addWidget(newlabel);
        newlayout->addWidget(newbox);
        ui->mainVL->addLayout(newlayout);

    }
}

InputFramesWindow::~InputFramesWindow()
{
    delete ui;
}

void InputFramesWindow::openOutputWindow()
{
    output = new Output();
    output->show();
}

void InputFramesWindow::on_showOutputPB_clicked()
{

    int noOfFrames = MainWindow::instance()->noOfFrames;
    list <QCheckBox*> :: iterator it = listOfCheckBoxPtrs.begin();
    list <bool> :: iterator it1 = listOfLostFrames.begin();

    for(int i = 0; i < noOfFrames; i++)
    {
        if((*it)->isChecked()){
            listOfLostFrames.push_back(true);
        }
        else {
            listOfLostFrames.push_back(false);
        }
        it++;
        it1++;
    }
    openOutputWindow();
}
