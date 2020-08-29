#ifndef _ADAPTER_
#define _ADAPTER_

#include "threePhaseOutlet.h"
#include "twoPhaseOutlet.h"

class Adapter : public ThreePhaseOutlet, public TwoPhaseOutlet{
    public:
        void doPlug() override{
            doConvert();
            doThreePlug();
        }
        void doConvert() {
            std::cout << "i am a adapter plugging into a two phase outlet" << std::endl;
        }
};



#endif
