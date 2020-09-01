#include "mediators.h"


int main(int argc, char const *argv[])
{
    Form f;
    f.check();
    f.writeAge();
    f.writeName();
    f.check();
    f.display();
    return 0;
}
