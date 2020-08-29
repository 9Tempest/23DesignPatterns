#ifndef _HUACHAIR_
#define _HUACHAIR_

#include "Chair.h"
#include <iostream>

class HuaweiChair : public Chair{
    public:
        void sit() override{
            std::cout << "Sitting on Huawei Chair!" << std::endl;
        }
};



#endif