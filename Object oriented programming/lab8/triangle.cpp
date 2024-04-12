#include"triangle.h"
#include<math.h>

float Triangle::findArea(){
    S=(r*r*sqrt(3)/2 /2);
    return S;
}
float Triangle::findPerimeter(){
    return 3 * r ;
}
Triangle::Triangle() : TwoDShape("Gurvaljin"){
}
Triangle::Triangle(const char *ner, int a, int b, int urt) : TwoDShape(ner, a, b, urt){
    y1 = r * cos(30 * PI /180.00) + y;
    y2 = r * cos(30 * PI /180.00) + y;
    x1 = r * sin(30 * PI/180.00) + x;
    x2 = x - r * sin(30 * PI/180.00);
}
void Triangle::setLength(float l){
    r = l ;
}

void Triangle::setA(float a, float b){
    y = b ;
    y1 = r * cos(30 * PI /180.00) + y;
    y2 = r * cos(30 * PI /180.00) + y;
    x1 = r * sin(30 * PI/180.00) + x;
    x2 = x - r * sin(30 * PI/180.00);
}
void Triangle::print(){
    cout <<"Ner: " << name << endl;
    cout << "Koordinatuud: " << endl;
    cout << "a(" << x << ", " << y << ") ";
    cout << "b(" << x1 << ", " << y1 << ") ";
    cout << "c(" << x2 << ", " << y2 << ") " << endl;
    cout << "Urt: " << r << " " << endl;
    cout << "Talbai: " << findArea() << endl;
    cout << "Perimeter: " << findPerimeter() << endl << endl;
}