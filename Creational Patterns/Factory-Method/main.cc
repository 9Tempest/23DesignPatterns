#include "TeslaFactory.h"
#include "BenzFactory.h"
#include "QQFactory.h"

int main(int argc, char const *argv[])
{
    TeslaFactory tf;
    BenzFactory bf;
    QQFactory qf;
    Car* car1 = tf.produceCar();
    Car* car2 = bf.produceCar();
    Car* car3 = qf.produceCar();
    car1->shutdown();
    car2->startup();
    car3->startup();
    delete car1;
    delete car2;
    delete car3;
    return 0;
}
