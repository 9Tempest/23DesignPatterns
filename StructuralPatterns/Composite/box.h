#ifndef _BOX_
#define _BOX_

#include <iostream>
#include "object.h"
#include <vector>
class Box : public Object{
    std::vector<Object*> container;
    public:
        Box(): Object(0){}
        int getPrice() override{
            int sum = 0;
            for (auto o : container){
                sum += o->getPrice();
            }
            return sum;
        }
        void execute() override{
            std::cout << "I am a box! I am going to execute the objects inside of me!" << std::endl;
            for (auto &o : container){
                o->execute();
            }
        }
        void addObject(Object* o) override{
            container.push_back(o);
        }
        ~Box(){
            std::cout << "deleting the box..." << std::endl;
            for (auto &o : container){
                delete o;
            }
        }
};


#endif
