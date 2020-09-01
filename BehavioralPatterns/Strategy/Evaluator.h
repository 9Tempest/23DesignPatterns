#ifndef _EVALUATOR_
#define _EVALUATOR_

#include "Strategy.h"
class Evaluator{
    Strategy* strategy;
    public:
        Evaluator(): strategy{nullptr}{}
        ~Evaluator(){
            if (strategy)
            delete strategy;
        }
        void evaluate(){
            strategy->evaluate();
        }
        void setStrategy(const Student& student){
            if (strategy) delete strategy;
            if (student.getAGE() < 12 || student.getGPA() < 2){
                strategy = new MSStrategy();
            }   else if (student.getAGE() < 18 || student.getGPA() < 3){
                strategy = new SHStrategy();
            }   else{
                strategy = new UVStrategy();
            }
        }
};



#endif
