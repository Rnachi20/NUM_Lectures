#include "circle.h"
#define Pi 3.14

float Circle::findArea(){
    S=Pi * r * r ;
    return S;
}
float Circle::findPerimeter(){
    return 2 * Pi * r ;
}
Circle::Circle() : TwoDShape("Dugui"){
    x = 0;
    y = 0;
}
Circle::Circle(const char *ner, int a, int b, int urt) : TwoDShape(ner, a, b, urt){
}
void Circle::setRadius(float a){
    r = a ;
}
void Circle::print(){
    cout << "Ner: " << name << endl ;
    cout << "Toirgiin tuv: " << x << " " << y << endl ;
    cout << "Radius: " << r << endl ;
    cout << "Talbai: " << findArea() << endl ;
    cout << "Toirgiin urt " << findPerimeter() << endl ;
}