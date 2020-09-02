#ifndef _VISITOR_
#define _VISITOR_

class Box;
class Charger;
class CellPhone;
class Hammer;
class Visitor{
    public:
        virtual void visit(Box* box) = 0;
        virtual void visit(Charger* charger) = 0;
        virtual void visit(CellPhone* phone) = 0;
        virtual void visit(Hammer* hammer) = 0;
        virtual ~Visitor(){}
};




#endif
