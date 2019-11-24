#ifndef INPUTFRAMESWINDOW_H
#define INPUTFRAMESWINDOW_H

#include <QWidget>
#include<QScrollArea>
#include <list>
#include <iterator>
#include <QCheckBox>
#include <output.h>
using namespace std;

namespace Ui {
class InputFramesWindow;
}

class InputFramesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit InputFramesWindow(QWidget *parent = nullptr);
    ~InputFramesWindow();
    static InputFramesWindow* instance();
    QScrollArea *mainArea = new QScrollArea;

    list<bool> listOfLostFrames;
    list<QCheckBox*> listOfCheckBoxPtrs;

public slots:
       void openOutputWindow();

private slots:
    void on_showOutputPB_clicked();

private:
    Ui::InputFramesWindow *ui;
    static InputFramesWindow* s_instance;
    Output *output;
};

#endif // INPUTFRAMESWINDOW_H
