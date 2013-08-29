#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <logwindow.h>
#include <xmlreader.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    LogWindow *wnd;
    XMLReader xml;
    std::queue<Command*>* commands;
    void openLogWindow();
signals:
    void updateLogWindow(QString&);
private slots:
    void startScenario();
    void stopScenario();
};

#endif // MAINWINDOW_H
