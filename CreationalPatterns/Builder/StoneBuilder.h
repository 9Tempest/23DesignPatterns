#ifndef _STONEBUILDER_
#define _STONEBUILDER_

#include "Builder.h"

class StoneBuilder : public Builder{
    public:
        StoneBuilder() : Builder(){}
        void buildWalls() override{
            house->setWalls(8);
            std::cout << "I am StoneBuilder! I am building walls!" << std::endl;
        }
        void buildType() override{
            house->setType("stone");
            std::cout << "I am StoneBuilder! I am building type!" << std::endl;
        }
        virtual void buildPool() override{
            house->setPool(false);
            std::cout << "I am StoneBuilder! I am building pool!" << std::endl;
        }
        virtual void buildGarbage() override{
            house->setGarbage(false);
            std::cout << "I am StoneBuilder! I am building garbage!" << std::endl;
        }
};


#endif