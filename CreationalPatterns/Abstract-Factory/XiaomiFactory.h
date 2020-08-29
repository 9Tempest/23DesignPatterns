#ifndef _XIAOMIFACT_
#define _XIAOMIFACT_
#include "XiaomiBed.h"
#include "XiaomiTable.h"
#include "XiaomiChair.h"
#include "AbstractFactory.h"
class XiaomiFactory : public AbstractFactory{
    public:
        Bed* produceBed() override{
            return new XiaomiBed();
        }
        Chair* produceChair() override{
            return new XiaomiChair();
        }
        Table* produceTable() override{
            return new XiaomiTable();
        }
};


#endif

