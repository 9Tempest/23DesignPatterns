#ifndef _HUATABLE_
#define _HUATABLE_

#include "Table.h"
#include <iostream>

class HuaweiTable : public Table{
    public:
        void use() override{
            std::cout << "Using Huawei table!" << std::endl;
        }
};



#endif