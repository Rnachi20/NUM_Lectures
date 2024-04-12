#ifndef __Circle__
#define __Circle__
#include"twoDshape.h"
class Circle : public TwoDShape {
public:
    float findArea();
    float findPerimeter();
    Circle();
    Circle(const char *ner, int a, int b, int urt);
    void setRadius(float a);
    void print();
};
#endif