#ifndef _OBSERVER_
#define _OBSERVER_
class Subject;
class Observer{
    public:
        virtual void notify(Subject& whoNotified) = 0;
        virtual ~Observer(){}
};


#endif
