#ifndef _WHETHER_
#define _WHETHER_

#include "subject.h"

class Whether : public Subject{
    Info info;
    public:
        Whether(Info info): info{info}{}
        void setCity(std::string city){
            info.city = city;
            notifyAll();
        }
        void setWet(float wet){
            info.wet = wet;
             notifyAll();
        }
        void setRainyDays(int days){
            info.rainyDays =days;
             notifyAll();
        }
        Info getInfo() const override{
            return info;
        }
};


#endif
