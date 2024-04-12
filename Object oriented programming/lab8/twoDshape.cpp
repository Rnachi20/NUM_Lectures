#include"twoDshape.h"

TwoDShape::TwoDShape(const char *ner, int a, int b, int urt) : Shape(ner){
    x = a ;
    y = b ;
    r = urt ;
}
TwoDShape::TwoDShape(const char *ner) : Shape(ner){
}