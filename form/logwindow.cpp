#include "logwindow.h"
#include "ui_logwindow.h"

LogWindow::LogWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogWindow)
{
    connect(parent, SIGNAL(updateLogWindow(QString&)), this, SLOT(update(QString&)));
    ui->setupUi(this);
}

LogWindow::~LogWindow()
{
    delete ui;
}
void LogWindow::update(QString &Message)
{
    ui->textBrowser->setText(ui->textBrowser->toPlainText() + "\n" + Message);
}
void LogWindow::ClearLogs()
{
    ui->textBrowser->clear();
}
