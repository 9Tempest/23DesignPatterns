#ifndef _QQFactory_
#define _QQFactory_
#include "Factory.h"
#include "QQ.h"

class QQFactory : public Factory{
    public:
        Car* produceCar() override{
            return new QQ();
        }
};

#endif

