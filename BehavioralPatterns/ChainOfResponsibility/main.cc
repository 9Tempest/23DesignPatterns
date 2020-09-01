#include "boss.h"
#include "manager.h"
#include "leader.h"


int main(int argc, char const *argv[])
{
    AbsenceRequest* request = new AbsenceRequest("My wife has a new child today, i have to accompany with her!", 8);
    AbsenceRequest* request2 = new AbsenceRequest("I want to have some days off", 12);
    Handler* chain = new Leader("Bob", new Manager("John", new Boss("BOSS")));
    if (chain->process(*request)){
        std::cout << "Process1" << std::endl;
        std::cout << "Oh yeah! i can have holidays!" << std::endl;
    }   else {
        std::cout << "Oh no" << std::endl;
    }
    if (chain->process(*request2)){
        std::cout << "Process2" << std::endl;
        std::cout << "Oh yeah! i can have holidays!" << std::endl;
    }   else {
        std::cout << "Oh no" << std::endl;
    }
    
    delete request;
    delete chain;
    return 0;
}
