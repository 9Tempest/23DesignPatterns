#ifndef _MANAGER_
#define _MANAGER_
#include "handler.h"
class Manager : public Handler{
    public:
        Manager(std::string name): Handler(name){}
        Manager(std::string name, Handler* nextHandler): Handler(name, nextHandler){}
        bool process(const AbsenceRequest& request){
            if (request.getDays() < 10){
                bool result = (request.getExcuse().length()>30);
                std::cout << "I am the Manager! Since your excuse is" << ( result ? " sufficient" : " too short") << std::endl;
                std::cout << "I " << (result ? "agree" : "refuse") << " your request" << std::endl;
                return result;
            }   else {
                std::cout << "I am the manager, but i do not have the authority to process your request, so i passed it to the boss!" << std::endl;
                return nextHandler->process(request);
            }
        }

};


#endif