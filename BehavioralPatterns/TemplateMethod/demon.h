#ifndef _DEMON_
#define _DEMON_

#include "gameAi.h"
class DemonAi :public GameAi{
    int mana;
    public:
        DemonAi(std::string name, int attack, int hp, int mana)
        : GameAi(name, attack, hp), mana{mana}{}
        void takeTurn() override{
            useMagic();
            doAttack();
        }
        void useMagic() {
            mana--;
            std::cout << "Darkness magic!" << std::endl;
        }
        
};


#endif