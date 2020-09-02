#ifndef _CARETAKER_
#define _CARETAKER_

#include "gameRole.h"
#include <vector>
class CareTaker{
    std::vector<GameRole::Memento*> saves;
    public:
        void save(GameRole::Memento* copy){
            saves.emplace_back(copy);
        }
        GameRole::Memento* load(int index){
            return saves.at(index);
        }
        ~CareTaker(){
            for (auto &o : saves){
                delete o;
            }
            saves.clear();
        }
};


#endif
