#ifndef _COMMAND_
#define _COMMAND_

#include "light.h"
class Command{
    protected:
        Light* light;
    public:
        virtual void execute() = 0;
        Command(Light* light): light{light}{}
        virtual ~Command(){}
};

class CommandOn : public Command{
    public:
        void execute(){
            light->on();
        }
        CommandOn(Light* light): Command(light){}

};

class CommandOff : public Command{
    public:
        void execute(){
            light->off();
        }
        CommandOff(Light* light): Command(light){}
};


#endif
