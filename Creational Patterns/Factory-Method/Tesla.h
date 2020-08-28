#ifndef _TESLA_
#define _TESLA_
#include "Car.h"
#include <iostream>

class Tesla : public Car{
    public:
        void startup() override{
            std::cout << "Tesla start up!" << std::endl;
        }
        void shutdown() override{
            std::cout << "Tesla shut down!" << std::endl;
        }
};


#endif
