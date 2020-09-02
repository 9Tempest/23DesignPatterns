#ifndef _OBJECT_
#define _OBJECT_

class Visitor;

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
        virtual void accept(Visitor& visitor) = 0;

};





#endif
