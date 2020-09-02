#ifndef _CHARGER_
#define _CHARGER_

#include <iostream>
#include <string>
#include "objects.h"
#include "visitors.h"

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
        void accept(Visitor& visitor) override{
            visitor.visit(this);
        }
};


#endif