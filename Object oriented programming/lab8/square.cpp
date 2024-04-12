#include "square.h"

float Square::findArea(){
    S=r*r ;
    return S;
}
float Square::findPerimeter(){
    return 4 * r ;
}
Square::Square() : TwoDShape("Kvadrat"){
    x = 0 ;
    y = 0 ;
    r = 1;
    x1 = x + r ;
    y1 = y ;
    x2 = x + r ;
    y2 = y + r ;
    x3 = x ;
    y3 = y + r ;
}
Square::Square(const char *ner, int a, int b, int urt) : TwoDShape(ner, a, b, urt){
    x1 = x + r ;
    y1 = y ;
    x2 = x + r ;
    y2 = y + r ;
    x3 = x ;
    y3 = y + r ;
}
void Square::setLength(float l){
    x = l ;
    y = l ;
    x1 = x + r ;
    y1 = y ;
    x2 = x + r ;
    y2 = y + r ;
    x3 = x ;
    y3 = y + r ;
}
void Square::setA(float a, float b){
    x = a ;
    y = b ;
    x1 = x + r ;
    y1 = y ;
    x2 = x + r ;
    y2 = y + r ;
    x3 = x ;
    y3 = y + r ;
}
void Square::print(){
    cout <<"Ner: " << name << endl;
    cout << "Koordinatuud: " << endl;
    cout << "a(" << x << ", " << y << ") ";
    cout << "b(" << x1 << ", " << y1 << ") " << endl;
    cout << "c(" << x2 << ", " << y2 << ") ";
    cout << "d(" << x3 << ", " << y3 << ") " << endl;
    cout << "Urt: " << r << " " << endl;
    cout << "Talbai: " << findArea() << endl;
    cout << "Perimeter: " << findPerimeter() << endl << endl;
}