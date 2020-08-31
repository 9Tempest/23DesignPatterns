#ifndef _IMAGE_
#define _IMAGE_
#include <string>
#include <iostream>
class Image{
    protected:
        std::string name;
    public:
        virtual void show() = 0;
        virtual ~Image(){}
        Image(std::string name): name{name}{}
};





#endif
