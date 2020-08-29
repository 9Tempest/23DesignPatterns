#ifndef _HUAFACT_
#define _HUAFACT_
#include "HuaweiBed.h"
#include "HuaweiTable.h"
#include "HuaweiChair.h"
#include "AbstractFactory.h"
class HuaweiFactory : public AbstractFactory{
    public:
        Bed* produceBed() override{
            return new HuaweiBed();
        }
        Chair* produceChair() override{
            return new HuaweiChair();
        }
        Table* produceTable() override{
            return new HuaweiTable();
        }
};


#endif