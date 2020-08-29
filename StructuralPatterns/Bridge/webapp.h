#ifndef _WEBAPP_
#define _WEBAPP_

#include "webStyle.h"
class WebApp{
    protected:
        WebStyle* style;
    public:
        WebApp(WebStyle* style):style{style}{}
        virtual ~WebApp(){delete style;}
        virtual void display() = 0;

};




#endif


