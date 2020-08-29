#ifndef _DARKTHM_
#define _DARKTHM_
#include <iostream>
#include <string>


#include "webStyle.h"
class DarkTheme : public WebStyle{
    std::string color = "black";
    bool isFloating;
    public:
        DarkTheme( bool isFloating,std::string color = "black"):color{color}, isFloating{isFloating}{}
        void displayStyle() override{
            std::cout << ((isFloating) ? "Floating" : "") << " "+color+ " style" << std::endl;
        }
};



#endif
