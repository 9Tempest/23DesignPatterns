#include "concreteObservers.h"
#include "whether.h"


int main(int argc, char const *argv[])
{
    Observer* canada = new CanadaRecorder();
    Observer* china = new ChinaRecorder();
    Whether w{Info{3,1.0,"SuZhou"}};
    w.attach(canada);
    w.attach(china);
    w.setCity("KunShan");
    w.disattach();
    w.setRainyDays(5);
    return 0;
}
