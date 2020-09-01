#ifndef _LIGHT_
#define _LIGHT_
#include <iostream>
class Light{
    public:
        void on(){
            std::cout << "Light is on!" << std::endl;
        }
        void off(){
            std::cout << "Light is off!" << std::endl;
        }
};

#endif
