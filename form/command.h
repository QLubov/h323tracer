#ifndef COMMAND_H
#define COMMAND_H

class Command
{
    //Q_OBJECT
public:
    Command(){}
    virtual ~Command(){}
    virtual void execute() = 0;
};

#endif // COMMAND_H
