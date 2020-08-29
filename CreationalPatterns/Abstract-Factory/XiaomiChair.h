#ifndef _XIAOCHAIR_
#define _XIAOCHAIR_

#include "Chair.h"
#include <iostream>

class XiaomiChair : public Chair{
    public:
        void sit() override{
            std::cout << "Sitting on Xiaomi Chair!" << std::endl;
        }
};



#endif
