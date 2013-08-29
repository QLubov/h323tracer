#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H
//#include <command.h>
//#include <string.h>
#include <grqcommand.h>
#include <gcfcommand.h>
class CommandFactory
{
public:
    CommandFactory(){}
    ~CommandFactory(){}
    //GRQCommand* CreateGRQCommand();
    //GCFCommand* CreateGCFCommand();
    Command* CreateCommand(std::string type);
};

#endif // COMMANDFACTORY_H
