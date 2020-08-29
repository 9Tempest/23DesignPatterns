#ifndef _DECORATOR_
#define _DECORATOR_
#include "hamProcessor.h"

class Decorator : public HamProcessor{
    protected:
        HamProcessor* inner;
    public:
        Decorator(HamProcessor* inner) : inner{inner}{}
        virtual ~Decorator(){delete inner;}

};



#endif
