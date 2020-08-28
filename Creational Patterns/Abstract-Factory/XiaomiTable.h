#ifndef _XIAOTABLE_
#define _XIAOTABLE_

#include "Table.h"
#include <iostream>

class XiaomiTable : public Table{
    public:
        void use() override{
            std::cout << "Using Xiaomi table!" << std::endl;
        }
};



#endif