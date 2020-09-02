#ifndef _HAMMER_
#define _HAMMER_
#include "objects.h"
#include <iostream>
#include <string>
#include "visitors.h"
class Hammer : public Object{
    int canUseTimes;
    bool canUse = true;
    public:
        Hammer(int price, int canUseTimes) : Object(price), canUseTimes(canUseTimes){}
        void execute() override{
            if (canUse){
                std::cout << "I am knocking! I can use " << --canUseTimes << " times left!" << std::endl;
                if (canUseTimes <= 0) canUse = false;
            }   else {
                std::cout << "I cannot use anymore!" << std::endl;
            }
        }
        void addObject(Object* o) override{}
        ~Hammer(){std::cout << "i am Hammer, i am deleted" << std::endl;}
        void accept(Visitor& visitor) override{
            visitor.visit(this);
        }
};


#endif