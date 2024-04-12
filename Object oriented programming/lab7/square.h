#include"twoD.h"
#ifndef __square__
#define __square__
class Square : public TwoDShape {
private:
    int x1, x2, x3, y1, y2, y3 ;
public:
    float findArea();
    float findPerimeter();
    Square();
    Square(char *ner, int a, int b, int urt);
    void setLength(float l);
    void setA(float a, float b);
    void print();
};
#endif