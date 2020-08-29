#include "Adapter.h"

int main(int argc, char const *argv[])
{
    TwoPhaseOutlet *outlet = new Adapter();
    outlet->doPlug();
    delete outlet;
    return 0;
}
