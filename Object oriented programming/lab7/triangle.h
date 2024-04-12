#include"twoD.h"
#ifndef __triangle__
#define __triangle__
class Triangle : public TwoDShape {
private:
    int x1, x2, y1, y2 ;
public:
    float findArea();
    float findPerimeter();
    Triangle();
    Triangle(char *ner, int a, int b, int urt);
    void setLength(float l);
    void setA(float a, float b);
    void print();
};
#endif