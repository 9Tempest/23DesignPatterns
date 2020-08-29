#ifndef _DIRECTOR_
#define _DIRECTOR_
#include "Builder.h"

class Director{
    Builder* builder;
    public:
        Director(Builder* builder): builder{builder}{}
        virtual ~Director(){
            if (builder){
                delete builder;
            }
            builder = nullptr;
        }
        House* buildHouse(){
            builder->buildType();
            builder->buildWalls();
            builder->buildGarbage();
            builder->buildPool();
            return builder->getHouse();
        }

};



#endif
