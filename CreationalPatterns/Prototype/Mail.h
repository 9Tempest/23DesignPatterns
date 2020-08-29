#ifndef _MAIL_
#define _MAIL_

#include "Cloneable.h"
#include <iostream>
#include <string>
#include "Template.h"
#include "util.h"
class Mail : public Cloneable{
    std::string title;
    std::string signitrue;
    Template* t;
    public:
        // note here our copy ctor should perform a deep copy, which copy the Template* deeply, since this Template* is relatively independent!
        Mail(const Mail& other): title{other.title}, signitrue{other.signitrue}, t{new Template(*other.t)}{}
        Mail(std::string title, std::string signitrue, Template*t): title{title}, signitrue{signitrue}, t{t}{}
        Mail(Mail&& other): title{other.title}, signitrue{other.signitrue}, t{new Template(*other.t)}{}
        ~Mail(){
            delete t;
        }
        Mail* clone() override{
            return new Mail(*this);
        }
        void setContent(std::string s){
            t->setContent(s);
        }
        void print(){
            std::cout << title <<std::endl;
            std::cout << t->getContent() << std::endl;
            std::cout << signitrue << std::endl;
        }
};


#endif
