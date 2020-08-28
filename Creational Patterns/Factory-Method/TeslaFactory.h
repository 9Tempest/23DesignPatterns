#ifndef _TeslaFactory_
#define _TeslaFactory_
#include "Factory.h"
#include "Tesla.h"

class TeslaFactory : public Factory{
    public:
        Car *produceCar() override{
            return new Tesla;
        }
};


#endif
