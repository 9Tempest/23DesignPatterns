#ifndef _LEADER_
#define _LEADER_
#include "handler.h"
class Leader : public Handler{
    public:
        Leader(std::string name): Handler(name){}
        Leader(std::string name, Handler* nextHandler): Handler(name, nextHandler){}

        bool process(const AbsenceRequest& request){
            if (request.getDays() < 3){
                bool result = (request.getExcuse().length()>10);
                std::cout << "I am the leader! Since your excuse is" << ( result ? " sufficient" : " too short") << std::endl;
                std::cout << "I " << (result ? "agree" : "refuse") << " your request" << std::endl;
                return result;
            }   else {
                std::cout << "I am the leader, but i do not have the authority to process your request, so i passed it to the manager!" << std::endl;
                return nextHandler->process(request);
            }
        }

};


#endif
