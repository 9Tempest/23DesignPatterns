#ifndef _HANDLER_
#define _HANDLER_

#include "absenceRequest.h"
class Handler{
    protected:
    std::string name;
    Handler* nextHandler;
    public:
        Handler(std::string name): name{name}, nextHandler{nullptr}{}
        Handler(std::string name, Handler* nextHandler): name{name}, nextHandler{nextHandler}{}
        virtual ~Handler(){
            if (nextHandler){
                std::cout << "deleting" << std::endl;
                delete nextHandler;
            }
        }
        virtual bool process(const AbsenceRequest& request) = 0;
        void setHandler(Handler* nextHandler){
            this->nextHandler = nextHandler;
        }
};



#endif
