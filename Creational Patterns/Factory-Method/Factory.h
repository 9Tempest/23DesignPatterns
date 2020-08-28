#ifndef _FACTORY_
#define _FACTORY_

class Car;
class Factory{
    public:
        virtual Car* produceCar() = 0;
};



#endif
