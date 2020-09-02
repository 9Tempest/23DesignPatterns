#ifndef _CONCRETE_
#define _CONCRETE_
#include"visitors.h"

class PriceVisitor : public Visitor{
    int totalPrice;
    public:
        PriceVisitor(): totalPrice{0}{}
        void resetPrice(){
            totalPrice = 0;
        }
        void visit(Box* box){
            totalPrice += box->getPrice();
        }
        void visit(Charger* charger){
            totalPrice += charger->getPrice();
        }
        void visit(CellPhone* phone){
            totalPrice += phone->getPrice();
        }
        void visit(Hammer* hammer){
            totalPrice += hammer->getPrice();
        }
        void display(){
            std::cout << "Total price is: " << totalPrice <<std::endl;
        }

};

class ToolVisitor : public Visitor{
    public:
        void visit(Box* box) override{
            box->execute();
        }
        void visit(Charger* charger) override{
            charger->execute();
        }
        void visit(CellPhone* phone) override{
            phone->execute();
        }
        void visit(Hammer* hammer) override{
            hammer->execute();
        }
};

#endif
