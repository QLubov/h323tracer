#ifndef LOGWINDOW_H
#define LOGWINDOW_H

#include <QMainWindow>

namespace Ui {
class LogWindow;
}

class LogWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit LogWindow(QWidget *parent = 0);
    ~LogWindow();
    void ClearLogs();
private:
    Ui::LogWindow *ui;
private slots:
    void update(QString&);
};

#endif // LOGWINDOW_H
