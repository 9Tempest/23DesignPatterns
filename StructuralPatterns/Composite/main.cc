#include "box.h"
#include "hammer.h"
#include "charger.h"
#include "cellphone.h"

int main(int argc, char const *argv[])
{
    Object* bigBox = new Box();
    bigBox->addObject(new Charger("Lucia", 20));
    bigBox->addObject(new Hammer(10, 3));
    Object* smallBox = new Box();
    smallBox->addObject(new CellPhone(60, "Luke"));
    bigBox->addObject(smallBox);
    std::cout << "Total Money is: "<< bigBox->getPrice() << std::endl;
    bigBox->execute();
    delete bigBox;
    return 0;
}
