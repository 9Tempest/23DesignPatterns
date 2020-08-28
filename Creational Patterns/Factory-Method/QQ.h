#ifndef _QQ_
#define _QQ_
//if we want to add another product called QQ, we have to add corresponding car and factory classes,
// but we do not need to modify previous class code
#include "Car.h"
#include <iostream>

class QQ: public Car{
    void startup() override{
        std::cout << "QQ starts up!" << std::endl;
    }
    void shutdown() override{
        std::cout << "QQ shut down!" << std::endl;
    }
};




#endif

