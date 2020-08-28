#include "HuaweiFactory.h"
#include "XiaomiFactory.h"

int main(int argc, char const *argv[])
{
    HuaweiFactory hf;
    XiaomiFactory xf;
    Chair* chair1 = hf.produceChair();
    Chair* chair2 = xf.produceChair();
    Bed* bed1 = hf.produceBed();
    Bed* bed2 = xf.produceBed();
    Table* table1 = hf.produceTable();
    Table* table2 = xf.produceTable();
    chair1->sit();
    chair2->sit();
    bed1->sleep();
    bed2->sleep();
    table1->use();
    table2->use();
    delete chair1;
    delete chair2;
    delete bed1;
    delete bed2;
    delete table1;
    delete table2;
    return 0;
}
