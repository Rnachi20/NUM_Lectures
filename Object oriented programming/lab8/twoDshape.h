#ifndef __twoD__
#define __twoD__
#include"shape.h"

class TwoDShape : public Shape {
protected:
    int x, y, r ;
    float S;
public:
    TwoDShape(const char *ner, int a, int b, int urt);
    TwoDShape(const char *ner);
    virtual float findArea()=0;
    virtual float findPerimeter()=0;
    virtual void print()=0;
};
#endif