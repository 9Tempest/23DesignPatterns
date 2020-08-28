#include "Director.h"
#include "PoolGarbBuilder.h"
#include "StoneBuilder.h"


int main(int argc, char const *argv[])
{
    Director *d1 = new Director(new PoolGarbageBuilder());
    House* house1 = d1->buildHouse();
    Director *d2 = new Director(new StoneBuilder());
    House* house2 = d2->buildHouse();
    house1->print();
    house2->print();
    delete d1;
    delete d2;
    return 0;
}
