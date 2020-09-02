#ifndef _GAMEAI_
#define _GAMEAI_
#include <string>
#include <iostream>

class GameAi{
    std::string name;
    int attack;
    int hp;
    public:
        GameAi(std::string name, int attack, int hp): name{name}, attack{attack}, hp{hp}{}
        virtual ~GameAi(){
            std::cout << "I am " << name << ", I died" << std::endl;
        }
        virtual void takeTurn() = 0;
        void doAttack(){
            std::cout << "I am " << name << ", and I did " << attack << " damage" << std::endl;
        }
};



#endif
