#ifndef _Singleton_NotTheradSafe_
#define _Singleton_NotTheradSafe_

class Singleton_NotTheradSafe{
    private:
        static Singleton_NotTheradSafe *instance;
        int data = 5;
        Singleton_NotTheradSafe(){}
        
    public:
        int getData(){
            return data;
        }
        static Singleton_NotTheradSafe * getInstance(){
            if (!instance){
                instance = new Singleton_NotTheradSafe();
            }
            return instance;
        }
        ~Singleton_NotTheradSafe(){
            if (!instance){
                delete instance;
            }
            instance = nullptr;
        }
};
Singleton_NotTheradSafe *Singleton_NotTheradSafe::instance = nullptr;

//      Hey! wait a minute! There are two problems here!
//      1.First of all, when the dtor is called, since we delete the instance
//      in the dtor. It will call the dtor of the instance, which may not stop.
//      so we have to encapsuluate the dtor.
//      2.This is not Thread-safe! Image we have two threads which all pass the if (!instance) condition,
//      then the instance will be created twice!

#endif