#ifndef _VIRTUALPROXY_
#define _VIRTUALPROXY_
#include "Image.h"
#include "realImageResource.h"

class VirtualProxy : public Image{
    RealImageResource* src = nullptr;
    public:
        VirtualProxy(std::string name):Image(name){}
        ~VirtualProxy(){if (src) delete src;}
        void show() override{
            if (!src){
                src = new RealImageResource(name);   //load the read resource only when it's needed!
            }
            src->show();
        }
};



#endif
