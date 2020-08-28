#ifndef _ABSFACTORY_
#define _ABSFACTORY_

class Bed;
class Chair;
class Table;

class AbstractFactory{
    public:
        virtual Bed* produceBed() = 0;
        virtual Chair* produceChair() = 0;
        virtual Table* produceTable() = 0;
};


#endif

