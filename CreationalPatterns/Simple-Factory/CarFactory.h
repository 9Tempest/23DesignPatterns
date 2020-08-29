#ifndef _CARFACTORY_
#define _CARFACTORY_

#include <string>
#include "Benz.h"
#include "Tesla.h"
class Car;


class CarFactory{
    public:
        Car* getCar(std::string name){
            if (name == "Benz"){
                return new Benz();
            }   else if (name == "Tesla"){
                return new Tesla();
            }   else {
                return nullptr;
            }
        }
};


#endif
