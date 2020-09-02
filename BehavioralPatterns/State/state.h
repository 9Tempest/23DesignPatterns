#ifndef _STATE_
#define _STATE_

class State{
    public:
        virtual void calc(int num1, int num2) = 0;
        virtual void power() = 0;
        virtual ~State(){}
};




#endif
