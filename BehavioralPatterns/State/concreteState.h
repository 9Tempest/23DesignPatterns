#ifndef _CONCRETESTATE_
#define _CONCRETESTATE_
#include "state.h"
#include <iostream>
#include "concreteState.h"
#include <map>
#include <string>

class Calculator{
    std::map<std::string, State*> states;
    State* currentState;
    public:
        Calculator();
        ~Calculator();
        State* getOn() const;
        State* getOff() const;
        void setState(State* s);
        void calc(int num1, int num2);
        void power();
};

class OnState : public State{
    Calculator* context;
    public:
        OnState(Calculator* context) : context{context}{}
        void calc(int num1, int num2) override{
            std::cout << "The result is :" << num1+num2 << std::endl;
        }
        void power() override{
            std::cout << "Turning Off" << std::endl;
            context->setState(context->getOff());
        }

};

class OffState : public State{
    Calculator* context;
    public:
        OffState(Calculator* context) : context{context}{}
        void calc(int num1, int num2) override{
            std::cout << "cannot calculate in Off mode"<< std::endl;
        }
        void power() override{
            std::cout << "Turning On" << std::endl;
            context->setState(context->getOn());
        }

};

        Calculator::Calculator(){
            states["On"] = new OnState(this);
            states["Off"] = new OffState(this);
            currentState = states["Off"];
        }

       Calculator:: ~Calculator(){
            for (auto & o : states){
                delete o.second;
            }
            states.clear();
        }

        State* Calculator::getOn() const{
            return states.at("On");
        }
        State* Calculator::getOff() const{
            return states.at("Off");
        }
        void Calculator::setState(State* s){
    
            currentState = s;
        }
        void Calculator::calc(int num1, int num2){
            currentState->calc(num1, num2);
        }
        void Calculator::power(){
            currentState->power();
        }



#endif
