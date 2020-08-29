#ifndef _HUAMIBED_
#define _HUAMIBED_

#include "Bed.h"
#include <iostream>
class HuaweiBed : public Bed{
    public:
        void sleep() override{
            std::cout << "Sleeping on Huawei Bed!" << std::endl;
        }
};



#endif