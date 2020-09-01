#ifndef _COMPONENT_
#define _COMPONENT_
#include "mediators.h"
#include <iostream>
#include <string>

class Mediator{
    public:
        virtual void notify(std::string event) = 0;
        virtual ~Mediator(){}
};


class Component{
    Mediator* md;
    public:
        void send(std::string event){
            md->notify(event);
        }
        virtual ~Component() = 0;
        Component(Mediator* md): md{md}{}
};

Component::~Component(){}

class Title : Component{
    std::string context;
    public:
        Title(Mediator* md, std::string context): Component(md), context{context}{}
        ~Title(){}
        const std::string getContext() const{
            return context;
        }
        void setContext(std::string context){
            this->context = context;
        }

};

class Information : Component{
    std::string name;
    int age;
    public:
        Information(std::string name, int age, Mediator* md): Component(md), name{name}, age{age}{}
        ~Information(){}
        void writeName(){
            std::cout << "input your name: "<< std::endl;
            std::cin >> name;
        }
        void writeAge(){
            std::cout << "input your age: "<< std::endl;
            std::cin >> age;
        }
        const std::string getName() const{
            return name;
        }
        const int getAge() const{
            return age;
        }
        void display(){
            std::cout << "Name: " <<name << std::endl;
            std::cout << "Age: "<< age << std::endl;
        }

};

class TextBox : Component{
    public:
        TextBox(Mediator* md): Component(md){}
        void writeName(){
            send("writeName");
        }
        void writeAge(){
            send("writeAge");
        }
};

class ValidationBtn : Component{

    public:
        ValidationBtn(Mediator* md): Component(md){}
        void click(){
            send("onClick");
        }
};

#endif
