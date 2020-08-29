#ifndef _POOLGARBAGEBUILDER_
#define _POOLGARBAGEBUILDER_

#include "Builder.h"

class PoolGarbageBuilder : public Builder{
    public:
        PoolGarbageBuilder() : Builder(){}
        void buildWalls() override{
            house->setWalls(10);
            std::cout << "I am PoolGarbageBuilder! I am building walls!" << std::endl;
        }
        void buildType() override{
            house->setType("wooden");
            std::cout << "I am PoolGarbageBuilder! I am building type!" << std::endl;
        }
        virtual void buildPool() override{
            house->setPool(true);
            std::cout << "I am PoolGarbageBuilder! I am building Pool!" << std::endl;
        }
        virtual void buildGarbage() override{
            house->setGarbage(true);
            std::cout << "I am PoolGarbageBuilder! I am building garbage!" << std::endl;
        }
};


#endif
