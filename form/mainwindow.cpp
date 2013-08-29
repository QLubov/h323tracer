#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wnd = 0;
}

MainWindow::~MainWindow()
{
    /*if(wnd)
        delete wnd;*/
    delete ui;    
}
void MainWindow::openLogWindow()
{
    wnd = new LogWindow(this);
    wnd->show();
}

void MainWindow::startScenario()
{
    QFile *file = new QFile(QFileDialog::getOpenFileName(this, "Choose file", "d:/", "XML-files (*.xml)"));
    commands = xml.ReadFile(file);
    int size = commands->size();
    //cout<<size<<endl;
    if(size)
        ui->pushButton->setEnabled(false);
    if(!wnd)
        openLogWindow();
    else
        wnd->ClearLogs();
    for(int i = 0; i < size; i++)
    {
        Command* cmd = commands->front();
        cmd->execute();
        commands->pop();
        QString mes = "Execute  " + QString::number(i);
        emit updateLogWindow(mes);
    }
}
void MainWindow::stopScenario()
{
    ui->pushButton->setEnabled(true);
}
