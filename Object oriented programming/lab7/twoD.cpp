#include"twoD.h"
TwoDShape::TwoDShape(char *ner, int a, int b, int urt) : Shape(ner){
x = a ;
y = b ;
r = urt ;
}
TwoDShape::TwoDShape(char *ner) : Shape(ner){
}