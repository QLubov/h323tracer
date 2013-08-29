#include "mainwindow.h"
#include <QApplication>
//#include "xmlreader.h"
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    /*XMLReader xml;
    QFile *file = new QFile(QFileDialog::getOpenFileName(&w, "Choose file", "d:/", "XML-files (*.xml)"));
    queue<Command*>* commands = xml.ReadFile(file);
    int size = commands->size();
    cout<<size<<endl;
    for(int i = 0; i < size; i++)
    {
        Command* cmd = commands->front();
        cmd->execute();
        commands->pop();
    }*/
    return a.exec();
}
