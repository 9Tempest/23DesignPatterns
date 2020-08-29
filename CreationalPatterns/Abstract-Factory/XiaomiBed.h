#ifndef _XIAOMIBED_
#define _XIAOMIBED_

#include "Bed.h"
#include <iostream>
class XiaomiBed : public Bed{
    public:
        void sleep() override{
            std::cout << "Sleeping on Xiaomi Bed!" << std::endl;
        }
};



#endif
