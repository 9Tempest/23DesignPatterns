#include "singleton.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    Singleton* instance = Singleton::getInstance();
    std::cout << instance->getData() << std::endl;
    return 0;
}
