#ifndef _LETTUCE_
#define _LETTUCE_
#include "decorator.h"
#include <iostream>
class LettuceDecorator : public Decorator{
    public:
        LettuceDecorator(HamProcessor * inner): Decorator(inner){}
        int getPrice() override{
            return inner->getPrice() + 3;
        }
        void getInfo() override{
            inner->getInfo();
            std::cout << " added lettuce";
        }
};


#endif