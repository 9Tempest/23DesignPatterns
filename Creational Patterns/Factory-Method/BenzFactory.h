#ifndef _BENZFACTORY_
#define _BENZFACTORY_
#include "Factory.h"
#include "Benz.h"

class BenzFactory : public Factory{
    public:
        Car* produceCar() override{
            return new Benz();
        }
};

#endif

