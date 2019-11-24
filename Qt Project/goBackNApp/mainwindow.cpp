#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QApplication"
#include "QObject"
#include"inputframeswindow.h"
#include <QDebug>

using namespace std;

MainWindow* MainWindow::s_instance = nullptr;

MainWindow* MainWindow::instance() { return s_instance; }

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setWindowTitle("Input Window");
    ui->setupUi(this);
    assert(!s_instance); //another instance already exists!
    s_instance = this;

    connect(ui->goPB, SIGNAL(click()), this, SLOT(openInputFramesWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openInputFramesWindow()
{
    inputFramesWindow = new InputFramesWindow();

    inputFramesWindow->show();
}

void MainWindow::on_goPB_clicked()
{
    noOfFrames = ui->noOfFramesSP->value();
    windowSize = ui->windowSizeSP->value();
    openInputFramesWindow();
}
