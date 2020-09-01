#ifndef _PERSON_
#define _PERSON_
#include <vector>
#include "commands.h"
class Person{
    std::vector<Command*> commands;
    public:
        ~Person(){
            for (auto & o : commands){
                delete o;
            }
            commands.clear();
        }
        void action(){
            for (auto &o : commands){
                o->execute();
            }
        }
        void addCommand(Command* cmd){
            commands.push_back(cmd);
        }
        void rmCommand(){
            commands.pop_back();
        }
};



#endif
