#ifndef _CELLPHONE_
#define _CELLPHONE_
#include "object.h"
#include <iostream>
#include <string>
class CellPhone : public Object{
    std::string PersonCallingTo;
    public:
        CellPhone(int price, std::string PersonCallingTo): Object(price), PersonCallingTo{PersonCallingTo}{}
        void execute() override{
            std::cout << "I am a CellPhone! I am calling to " << PersonCallingTo << std::endl;
        }
        void addObject(Object* o) override{}
        ~CellPhone(){std::cout << "i am CellPhone, i am deleted" << std::endl;}
};


#endif
