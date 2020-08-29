#ifndef _STEAK_
#define _STEAK_
#include "decorator.h"
#include <iostream>
class SteakDecorator : public Decorator{
    public:
        SteakDecorator(HamProcessor * inner): Decorator(inner){}
        int getPrice() override{
            return inner->getPrice() + 5;
        }
        void getInfo() override{
            inner->getInfo();
            std::cout << " Steak added!";
        }
};


#endif