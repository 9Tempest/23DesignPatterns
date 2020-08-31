#ifndef _REALIMAGE_
#define _REALIMAGE_
#include "Image.h"

class RealImageResource : public Image{
    int *realData;
    public:
        RealImageResource(std::string name) : Image(name), realData{new int[1000]}{}
        ~RealImageResource(){delete[] realData;}
        void show() override{
            std::cout << "Real Pic " << name << " showed! It is very big!" << std::endl;
        }
};




#endif
