#ifndef _COLOR_
#define _COLOR_
#include "flyWeight.h"
#include <iostream>
#include <string>
#include "extrinsicState.h"

class ColorFlyWeight : public FlyWeight{
    std::string color;
    int *colorDetailedData;
    public:
        ColorFlyWeight(std::string color): color{color}, colorDetailedData{new int[10000]} {}
        ~ColorFlyWeight(){delete[] colorDetailedData;}
        void operation(const ExtrinsicState& ext) override{
            std::cout << "Drawing a " << color << "in the position of ( " << ext.getX() << " ," << ext.getY() << " )" << std::endl;
        }
};




#endif
