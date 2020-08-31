#ifndef _FLY_
#define _FLY_
#include <string>
class ExtrinsicState;
class FlyWeight{
    public:
        virtual ~FlyWeight(){}
        virtual void operation(const ExtrinsicState& ext) = 0;
};


#endif
