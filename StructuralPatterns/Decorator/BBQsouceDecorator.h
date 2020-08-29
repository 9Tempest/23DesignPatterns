#ifndef _BBQSOUCE_
#define _BBQSOUCE_
#include "decorator.h"
#include <iostream>
class BBQsouceDecorator : public Decorator{
    public:
        BBQsouceDecorator(HamProcessor * inner): Decorator(inner){}
        int getPrice() override{
            return inner->getPrice() + 1;
        }
        void getInfo() override{
            inner->getInfo();
            std::cout << "added BBQ souce";
        }
};


#endif
