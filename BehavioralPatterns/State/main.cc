#include "concreteState.h"

int main(int argc, char const *argv[])
{
    Calculator c;
    c.calc(3,4);
    c.power();
    c.calc(4,5);
    c.power();

    return 0;
}
