#ifndef _ORC_
#define _ORC_

#include "gameAi.h"
class OrcAi :public GameAi{
    std::string buildingName;
    public:
        OrcAi(std::string name, int attack, int hp, std::string buildingName)
        : GameAi(name, attack, hp), buildingName{buildingName}{}
        void takeTurn() override{
            buildUnit();
            doAttack();
        }
        void buildUnit(){
            std::cout << "I am building a " << buildingName << std::endl;
        }
};


#endif
