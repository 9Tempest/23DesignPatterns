#ifndef _BENZ_
#define _BENZ_
#include <iostream>
#include "Car.h"
class Benz : public Car{
    public:
        void startup() override{
            std::cout << "Benz starts up!" << std::endl;
        }
        void shutdown() override{
            std::cout << "Benz shutdown" << std::endl;
        }
};

#endif
