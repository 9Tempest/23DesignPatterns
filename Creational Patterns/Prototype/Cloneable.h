#ifndef _CLONEABLE_
#define _CLONEABLE_
class Mail;
class Cloneable{
    public:
        virtual Mail* clone() = 0;
        virtual ~Cloneable(){}
};

#endif

