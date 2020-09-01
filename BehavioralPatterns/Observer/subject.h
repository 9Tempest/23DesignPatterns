#ifndef _SUBJECT_
#define _SUBJECT_
#include "observer.h"
#include <vector>
#include <string>
struct Info{
    int rainyDays;
    float wet;
    std::string city;
};


class Subject{
    std::vector<Observer*> observers;
    public:
        void notifyAll(){
            for (auto & o: observers){
                o->notify(*this);
            }
        }
        virtual ~Subject(){
            for (auto &o : observers){
                delete o;
            }
        }
        virtual Info getInfo() const= 0;
        void attach(Observer* o){
            observers.emplace_back(o);
        }
        void disattach(){
            observers.pop_back();
        }
};


#endif
