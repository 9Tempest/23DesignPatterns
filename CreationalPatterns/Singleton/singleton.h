#ifndef _Singleton_
#define _Singleton_

#include <iostream>

//This is a thread-safe Singleton, by predicating the instance for twice and lock the thread.
//The dtor is encapsulated in a Garbage class, which will delete the instance after the life cycle of Garbage

class Singleton{
    private:
        static Singleton *instance;
        int data = 5;
        Singleton(){}
        class Garbage{
            public:
                ~Garbage(){
                    if (Singleton::instance){
                        delete Singleton::instance;
                        std::cout << "Garbgae deleted!" << std::endl;
                    }
                    Singleton::instance = nullptr;
                }
        };
        static Garbage garbage;
    public:
        int getData(){
            return data;
        }
        static Singleton * getInstance(){
            if (!instance){
                //add lock thread method!
                if (!instance){
                    instance = new Singleton();
                }
                //add Unlock thread method!
            }
            return instance;
        }
};
Singleton *Singleton::instance = nullptr;
Singleton::Garbage Singleton::garbage;

#endif