#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inputframeswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow* instance();
    int noOfFrames;
    int windowSize;

private:
    Ui::MainWindow *ui;
    static MainWindow* s_instance;
    InputFramesWindow *inputFramesWindow;

public slots:
       void openInputFramesWindow();

private slots:
        void on_goPB_clicked();
};

#endif // MAINWINDOW_H
