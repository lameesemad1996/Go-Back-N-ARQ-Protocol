#include "output.h"
#include "ui_output.h"
#include "mainwindow.h"
#include "inputframeswindow.h"
#include "QLabel"
#include "QVBoxLayout"
#include "QDebug"
#include "QScrollArea"
#include "QIcon"

#include<iostream>
#include<ctime>
#include<cstdlib>
#include <time.h>
#include<list>
#include<iterator>

using namespace std;

Output::Output(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Output)
{
    ui->setupUi(this);

    QScrollArea *mainArea = new QScrollArea;
    mainArea->show();
    mainArea->setWidget(this);

    this->setWindowTitle("Output Window");

    QVBoxLayout *mainVL = new QVBoxLayout();
    this->setLayout(mainVL);
    mainVL->setSizeConstraint(QLayout::SetMinimumSize);

    int noOfFrames = MainWindow::instance()->noOfFrames;
    int windowSize = MainWindow::instance()->windowSize;

    list<bool> listOfLostFrames;
    list <bool> :: iterator frameit2 = (InputFramesWindow::instance()->listOfLostFrames).begin();

    int n = 0;
    while (n < noOfFrames) {
        listOfLostFrames.push_back(*frameit2);
        frameit2++;
        n++;
    }

    list <bool> :: iterator frameit = listOfLostFrames.begin();

    n = 0;
    while (n < noOfFrames) {
        qDebug() << *frameit;
        frameit++;
        n++;
    }

    frameit = listOfLostFrames.begin();

    int no_tr=0;
    int i=1;

    qDebug() << listOfLostFrames.size();

    list <bool> :: iterator frameitinner = listOfLostFrames.begin();

    while(i <= noOfFrames)
    {
        int x=0;

        for(int j = i; j < i + windowSize && j <= noOfFrames; j++)
        {
            QLabel *label1 = new QLabel;
            label1->setText("Frame " + QString::number(j) + " is sent");
            mainVL->addWidget(label1);
            no_tr++;
        }
        frameitinner = frameit;
        for(int j = i; j< i + windowSize && j <= noOfFrames; j++)
        {
            qDebug() << *frameitinner;
            if(!*frameitinner)
            {
                QLabel *label2 = new QLabel;
                label2->setText("Acknowledgement " + QString::number(j+1) + " received");
                mainVL->addWidget(label2);
                frameitinner++;
                x++;
            }
            else {
                *frameitinner=false;
                QLabel *label4 = new QLabel;
                label4->setText("Retransmitting Window");
                mainVL->addWidget(label4);
                break;
            }
        }

        frameit = frameitinner;
        i+=x;
    }

    QLabel *label3 = new QLabel;
    label3->setText("Total number of transmissions : " + QString::number(no_tr));
    mainVL->addWidget(label3);

}

Output::~Output()
{
    delete ui;
}
