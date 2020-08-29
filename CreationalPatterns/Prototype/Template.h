#ifndef _TEMPLATE_
#define _TEMPLATE_
#include <string>
class Template{
    std::string content;
    public:
        Template(std::string s): content{s}{}
        Template(const Template& other): content{other.content}{}
        Template(Template&& other): content{other.content}{}
        const std::string getContent() const {
            return content;
        }
        void setContent( std::string s ){
           content = s;
        }
};



#endif
