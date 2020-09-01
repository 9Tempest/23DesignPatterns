#ifndef _BOSS_
#define _BOSS_
#include "handler.h"
class Boss : public Handler{
    public:
        Boss(std::string name): Handler(name){}
        
        bool process(const AbsenceRequest& request){
                bool result = (request.getExcuse().length()>100);
                std::cout << "I am the Boss! Since your excuse is" << ( result ? " sufficient" : " too short") << std::endl;
                std::cout << "I " << (result ? "agree" : "refuse") << " your request" << std::endl;
                return result;
        }

};


#endif