#ifndef __Square__
#define __Square__
#include"twoDshape.h"
class Square : public TwoDShape {
private:
    int x1, x2, x3, y1, y2, y3 ;
public:
    float findArea();
    float findPerimeter();
    Square();
    Square(const char *ner, int a, int b, int urt);
    void setLength(float l);
    void setA(float a, float b);
    void print();
};
#endif