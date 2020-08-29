#ifndef _HAMPROCESSOR_
#define _HAMPROCESSOR_

class HamProcessor{
    public:
        virtual int getPrice() = 0;
        virtual void getInfo() = 0;
        virtual ~HamProcessor(){}
};


#endif
