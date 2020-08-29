#ifndef _PIC_
#define _PIC_
#include "webapp.h"
#include <string>
#include <iostream>
#include "webStyle.h"
class PicShow : public WebApp{
    std::string pic;
    int size;
    public:
        PicShow(WebStyle* style, std::string pic, int size): WebApp(style), pic{pic}, size{size}{} 
        void display() override{
            std::cout << "This is a Picture Show!" << std::endl;
            std::cout << "This is "<< pic <<  "with size "<< size << std::endl;
            style->displayStyle();
        }
};




#endif