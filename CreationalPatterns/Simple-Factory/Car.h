#ifndef _CAR_
#define _CAR_

class Car{
    public:
        virtual void startup() = 0;
        virtual void shutdown() = 0;
        virtual ~Car(){}
};



#endif
