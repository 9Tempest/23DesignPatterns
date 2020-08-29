#ifndef _ADAPTER_
#define _ADAPTER_
#include "threePhaseOutlet.h"
#include "twoPhaseOutlet.h"

class Adapter : public TwoPhaseOutlet{
    ThreePhaseOutlet* outlet = nullptr;
    public:
        Adapter(ThreePhaseOutlet* outlet) : outlet{outlet}{}
        ~Adapter(){delete outlet;}
        void doConvert(){
            std::cout << "I am converting three to two" << std::endl;
        }
        void doPlug() override{
            doConvert();
            outlet->doThreePlug();
        }

};


#endif
