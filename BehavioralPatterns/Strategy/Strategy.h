#ifndef _STRATEGY_
#define _STRATEGY_
#include "student.h"
#include <iostream>
class Strategy{
    public:
    virtual ~Strategy(){}
    virtual void evaluate() = 0;
};

class UVStrategy : public Strategy{
    void evaluate(){
        std::cout << "Since your gpa and age is high, I suggest you to go to University" << std::endl;
    }
};

class SHStrategy : public Strategy{
    void evaluate(){
        std::cout << "Since your gpa and age is okay, i suggest you to go to HighShcool" << std::endl;
    }
};

class MSStrategy : public Strategy{
    void evaluate(){
        std::cout << "Since your gpa and age is low, i suggest you to go to HighShcool" << std::endl;
    }
};


#endif
