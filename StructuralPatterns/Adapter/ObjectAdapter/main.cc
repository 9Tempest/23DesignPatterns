#include "Adapter.h"

int main(int argc, char const *argv[])
{
    TwoPhaseOutlet *ol1 = new Adapter(new ThreePhaseOutlet());
    ol1->doPlug();
    delete ol1;
    return 0;
}
