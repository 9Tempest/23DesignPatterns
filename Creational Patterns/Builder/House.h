#ifndef _HOUSE_
#define _HOUSE_

#include <iostream>
#include <string>

class House{
    int walls = 4;
    std::string type = "wooden";
    bool hasPool = false;
    bool hasGarbage = false;
    public:
        House(){}
        virtual ~House(){}
        const int getWalls() const{
            return walls;
        }
        const std::string getType() const{
            return type;
        }
        const bool getHasPool() const{
            return hasPool;
        }
        const bool getHasGarbage() const{
            return hasGarbage;
        }
        void print(){
            std::cout << "This is a " << getType() << " House with " << getWalls() << " walls" << ((hasPool) ? ",a pool":"") << ((hasGarbage) ? ",a Garbage" : "") << std::endl;
        }
        void setWalls(int walls){
            this->walls = walls;
        }
        void setType(std::string type){
            this->type = type;
        }
        void setPool(bool hasPool){
            this->hasPool = hasPool;
        }
        void setGarbage(bool hasGarbage){
            this->hasGarbage = hasGarbage;
        }

};


#endif
