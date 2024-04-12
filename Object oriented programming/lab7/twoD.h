#include"shape.h"
#ifndef __twoD__
#define __twoD__
class TwoDShape : public Shape {
protected:
    int x, y, r ;
    float S;
public:
    TwoDShape(char *ner, int a, int b, int urt);
    TwoDShape(char *ner);
    virtual float findArea()=0;
    virtual void print()=0;
};
#endif