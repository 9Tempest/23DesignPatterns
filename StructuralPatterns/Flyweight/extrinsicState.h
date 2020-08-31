#ifndef _EXTRINSIC_
#define _EXTRINSIC_

class ExtrinsicState{
    int x,y;
    public:
        ExtrinsicState(int x, int y) : x{x}, y{y}{}
        const int getX() const{
            return x;
        }
        const int getY() const{
            return y;
        }
        void setX(int x) {this->x = x;}
        void setY(int y) {this->y = y;}
};



#endif

