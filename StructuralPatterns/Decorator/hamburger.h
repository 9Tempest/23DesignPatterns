#ifndef _HAMBURGER_
#define _HAMBURGER_

#include "hamProcessor.h"
#include <iostream>
class Hamburger : public HamProcessor{
    int price;
    public:
        Hamburger(int price): price{price}{}
        ~Hamburger(){
        }
        int getPrice() override{
            return price;
        }
        void getInfo() override{
            std::cout << "This is a Hamburger";
        }

};



#endif
