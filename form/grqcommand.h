#ifndef GRQCOMMAND_H
#define GRQCOMMAND_H
#include <command.h>
#include <iostream>
class GRQCommand : public Command
{
    //Q_OBJECT
public:
    GRQCommand(){}
    ~GRQCommand(){}
    void execute();
/*signals:
    void updateLogs();*/
};

#endif // GRQCOMMAND_H
