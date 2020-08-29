#ifndef _BLACKFONT_
#define _BLACKFONT_
#include <iostream>
#include <string>


#include "webStyle.h"
class BlackFont : public WebStyle{
    std::string color = "black";
    std::string fontFamily = "Jiaguwen";
    public:
        BlackFont( std::string fontFamily,std::string color = "black"):color{color}, fontFamily{fontFamily}{}
        void displayStyle() override{
            std::cout << "All words are in "<< fontFamily << " " << color << std::endl;
        }
};



#endif