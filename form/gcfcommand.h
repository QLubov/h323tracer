#ifndef GCFCOMMAND_H
#define GCFCOMMAND_H
#include <command.h>
#include <iostream>
class GCFCommand : public Command
{
    //Q_OBJECT
public:
    GCFCommand(){}
    ~GCFCommand(){}
    void execute();
/*signals:
    void updateLogs();*/
};

#endif // GCFCOMMAND_H
