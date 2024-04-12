#include"twoD.h"
#ifndef __circle__
#define __circle__
class Circle : public TwoDShape {
public:
    float findArea();
    float findPerimeter();
    Circle();
    Circle(char *ner, int a, int b, int urt);
    void setRadius(float a);
    void print();
};
#endif