#include "commandfactory.h"

/*GCFCommand* CommandFactory::CreateGCFCommand()
{
    return new GCFCommand;
}
GRQCommand* CommandFactory::CreateGRQCommand()
{
    return new GRQCommand;
}*/
Command* CommandFactory::CreateCommand(std::string type)
{
    Command *command;
    if(type == "GRQ")
        command = new GRQCommand();
    else
    {
        if(type == "GCF")
            command = new GCFCommand();
        else
            command = NULL;
    }
    return command;
}

