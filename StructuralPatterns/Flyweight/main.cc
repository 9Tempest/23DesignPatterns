#include "flyweightFactory.h"


int main(int argc, char const *argv[])
{

    FlyweightFactory factory;
    ColorFlyWeight* color1 = factory.getColor("Red");
    ColorFlyWeight* color2 = factory.getColor("Green");
    ColorFlyWeight* color3 = factory.getColor("Blue");
    for (int i = 0; i < 100000; i++){
        //ColorFlyWeight* color4 = new ColorFlyWeight("Purple");
        ExtrinsicState temp(i,i);
        if (i < 3000){
            color1->operation(temp);
            //color4->operation(temp);
        }   else if (i < 6000 && i >= 3000){
            color2->operation(temp);
            //color4->operation(temp);
        }   else{
            color3->operation(temp);
            //color4->operation(temp);
        }
        //delete color4;
    }
    return 0;
}

//since every color has to be described by 10000 ints, so image what if i create 100000 objects without this design pattern!
//uncommon the color4 parts here and compare the speed!