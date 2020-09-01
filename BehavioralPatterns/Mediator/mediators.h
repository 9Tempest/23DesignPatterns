#ifndef _MEDIATOR_
#define _MEDIATOR_
#include "components.h"



class Form : public Mediator{
    Title *t;
    Information *info;
    TextBox *tb;
    ValidationBtn *btn;
    public:
        Form():t{new Title(this, "title")}, info{new Information("", 0, this)}, tb{new TextBox(this)}, btn{new ValidationBtn(this)}{}
        void display(){
            std::cout << "Title: " << t->getContext() << std::endl;
            info->display();
        }
        void notify(std::string event){
            if (event == "onClick"){
                if (!info->getName().empty() && info->getAge()> 0){
                    std::cout << "Validation success" << std::endl;
                    t->setContext("Success");
                }   else {
                    std::cout << "Validation Failed" << std::endl;
                }
            }   else if (event == "writeAge"){
                info->writeAge();
            }   else if (event == "writeName"){
                info->writeName();
            }   else {
                std::cout << "invalid" << std::endl;
            }
        }
        void check(){
            btn->click();
        }
        void writeAge(){
            tb->writeAge();
        }
        void writeName(){
            tb->writeName();
        }
        ~Form(){
            delete t;
            delete info;
            delete tb;
            delete btn;
        }
};



#endif
