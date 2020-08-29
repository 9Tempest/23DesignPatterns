#include "lettuceDecorator.h"
#include "hamburger.h"
#include "BBQsouceDecorator.h"
#include "steakDecorator.h"
int main(int argc, char const *argv[])
{
    HamProcessor *hambuger1 = new BBQsouceDecorator(new SteakDecorator( new LettuceDecorator(new Hamburger(10))));
    std::cout << "total price: "<< hambuger1->getPrice() << std::endl;
    hambuger1->getInfo();
    std::cout << std::endl;
    return 0;
}
