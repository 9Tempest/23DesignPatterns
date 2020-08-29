#ifndef _BLOG_
#define _BLOG_
#include "webapp.h"
#include <string>
#include <iostream>
#include "webStyle.h"
class Blog : public WebApp{
    std::string content;
    public:
        Blog(WebStyle* style, std::string content): WebApp(style), content{content}{}
        void display() override{
            std::cout << "This is a Blog!" << std::endl;
            std::cout << content << std::endl;
            style->displayStyle();
        }
};




#endif

