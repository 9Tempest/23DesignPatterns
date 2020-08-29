#ifndef _CHARGER_
#define _CHARGER_
#include "object.h"
#include <iostream>
#include <string>
class Charger : public Object{
    std::string personChargingTo;
    int owe;
    public:
        Charger(std::string personChargingTo, int owe): Object(0), personChargingTo{personChargingTo}, owe{owe}{}
        int getPrice() override{
            return owe;
        }
        void execute() override{
            std::cout << "I am charging " << personChargingTo << " for " << owe <<" dollars" << std::endl;
        }
        void addObject(Object* o) override{}
        ~Charger(){std::cout << "i am Charger, i am deleted" << std::endl;}
};


#endif