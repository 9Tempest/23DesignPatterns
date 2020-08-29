#include "CarFactory.h"

int main(int argc, char const *argv[])
{
    CarFactory cf;
    Car* car1 = cf.getCar("Benz");
    Car* car2 = cf.getCar("Tesla");
    car1->startup();
    car1->shutdown();
    car2->startup();
    car2->shutdown();
    delete car1;
    delete car2;
    return 0;
}
