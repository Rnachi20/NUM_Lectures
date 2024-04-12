#ifndef __Triangle__
#define __Triangle__
#include"twoDshape.h"
class Triangle : public TwoDShape {
private:
    int x1, x2, y1, y2 ;
public:
    float findArea();
    float findPerimeter();
    Triangle();
    Triangle(const char *ner, int a, int b, int urt);
    void setLength(float l);
    void setA(float a, float b);
    void print();
};
#endif