#include "Mail.h"

int main(int argc, char const *argv[])
{
    Mail* mail1 = new Mail("Dear Luke", "yours 9Tempest", new Template("hahaha"));
    Mail* mail2 = mail1->clone();
    std::cout << "this is Mail1" << std::endl;
    mail1->print();
    std::cout << "this is Mail2" << std::endl;
    mail2->print();
    std::cout << "this is Mail1, which is modified" << std::endl;
    mail1->setContent("Hi, this is 9Tempest!");
    mail1->print();
    std::cout << "this is Mail2" << std::endl;
    mail2->print();
    delete mail1;
    delete mail2;
    return 0;
}
