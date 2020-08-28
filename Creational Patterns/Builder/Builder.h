#ifndef _BUILDER_
#define _BUILDER_
#include "House.h"
class Builder{
    protected:
        House* house = nullptr;
    public:
        virtual ~Builder(){
            if (house){
                delete house;
            }
        }
        Builder(){
            house = new House();
        }
        virtual void buildWalls() = 0;
        virtual void buildType() = 0;
        virtual void buildPool() = 0;
        virtual void buildGarbage() = 0;
        House* getHouse(){
            return house;
        }

};



#endif
