#ifndef _PROTECTIONPROXY_
#define _PROTECTIONPROXY_
#include "Image.h"
#include "realImageResource.h"

class ProtectionProxy : public Image{
    RealImageResource* src = nullptr;
    public:
        ProtectionProxy(std::string name):Image(name), src{new RealImageResource(name)}{}
        ~ProtectionProxy(){if (src) delete src;}
        void show() override{           //only the admin can show the pic
            std::string readin;
            std::cout << "Please type your authority:" << std::endl;
            std::cin >> readin;
            if (readin == "admin"){
                src->show();
            }   else {
                std::cout << "You do not have the authority to visit the resource" << std::endl;
            }  
        }
};



#endif
