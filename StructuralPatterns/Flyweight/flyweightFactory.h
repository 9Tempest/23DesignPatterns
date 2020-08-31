#ifndef _FACTORY_
#define _FACTORY_

#include "colorFlyWeight.h"
#include <map>
#include <algorithm>


class FlyweightFactory{
    std::map<std::string, ColorFlyWeight*> container;
    public:
        FlyweightFactory(){
            container["Red"] = new ColorFlyWeight("Red");
            container["Green"] = new ColorFlyWeight("Green");
            container["Blue"] = new ColorFlyWeight("Blue");
        }
        ~FlyweightFactory(){
            for (auto &o : container){
                delete o.second;
            }
        }
        ColorFlyWeight* getColor(std::string color){
            auto foundColor = container.find(color);
            if (foundColor != container.end()){
                std::cout << "returned color!" << std::endl;
                return foundColor->second;
            }   
            return nullptr;
        }
};



#endif
