#ifndef _OBJECT_
#define _OBJECT_

class Object{
    int price;
    public:
        Object(int price): price{price}{}
        virtual ~Object(){}
        virtual int getPrice(){
            return price;
        }
        virtual void execute() = 0;
        virtual void addObject(Object* o) = 0;

};





#endif
