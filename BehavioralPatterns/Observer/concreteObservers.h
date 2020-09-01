#ifndef _CONCRTEOBSERVERS_
#define _CONCRTEOBSERVERS_

#include "observer.h"
#include <iostream>
#include "subject.h"
class CanadaRecorder : public Observer{
    public:
        void notify(Subject& whoNotified) override{
            std::cout << "This is Canada Recorder! Whether has changed!" << std::endl;
            std::cout << "The latest Raindays is :" << whoNotified.getInfo().rainyDays << std::endl;
            std::cout << "The latest wet is :" << whoNotified.getInfo().wet << std::endl;
            std::cout << "The City is :" << whoNotified.getInfo().city << std::endl;
        }
};

class ChinaRecorder : public Observer{
    public:
        void notify(Subject& whoNotified) override{
            std::cout << "这里是中国记者！天气变了！" << std::endl;
            std::cout << "最新下雨天数是:" << whoNotified.getInfo().rainyDays << std::endl;
            std::cout << "最新湿度是:" << whoNotified.getInfo().wet << std::endl;
            std::cout << "城市是" << whoNotified.getInfo().city << std::endl;
        }
};




#endif
