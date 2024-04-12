#include<iostream>
#include<string.h>
#include<math.h>
#define PI 3.14
using namespace std;

class Shape {
protected:
char *name ;
public:
void setName(char *ner){
name = new char[strlen(ner)+1];
strcpy(name, ner);
}
Shape(char *ner){
name = new char[strlen(ner)+1];
strcpy(name, ner) ;
cout << "Durs uussen" << endl ;
}
Shape(){
cout << "Durs uussen" << endl ;
}
~Shape(){
delete name ;
cout << "Durs ustgagdlaa" << endl ;
}
};
class TwoDShape : public Shape {
protected:
int x, y, r ;
float S;
public:
TwoDShape(char *ner, int a, int b, int urt) : Shape(ner){
x = a ;
y = b ;
r = urt ;
}
TwoDShape(char *ner) : Shape(ner){
}
virtual float findArea()=0;
virtual void print()=0;

};
class Circle : public TwoDShape {
public:
float findArea(){
S=PI * r * r ;
return S;
}
float findPerimeter(){
return 2 * PI * r ;
}
Circle() : TwoDShape("Dugui"){
x = 0 ;
y = 0 ;
}
Circle(char *ner, int a, int b, int urt) : TwoDShape(ner, a, b, urt){
}
void setRadius(float a){
r = a ;
}
void print(){
cout << "Ner: " << name << endl ;
cout << "Toirgiin tuv: " << x << " " << y << endl ;
cout << "Radius: " << r << endl ;
cout << "Talbai: " << findArea() << endl ;
cout << "Toirgiin urt " << findPerimeter() << endl ;
}
};
class Square : public TwoDShape {
private:
int x1, x2, x3, y1, y2, y3 ;
public:
float findArea(){
S=r*r ;
return S;
}

float findPerimeter(){
return 4 * r ;
}
Square() : TwoDShape("Kvadrat"){
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
Square(char *ner, int a, int b, int urt) : TwoDShape(ner, a, b, urt){
x1 = x + r ;
y1 = y ;
x2 = x + r ;
y2 = y + r ;
x3 = x ;
y3 = y + r ;
}
void setLength(float l){
x = l ;
y = l ;
x1 = x + r ;
y1 = y ;
x2 = x + r ;
y2 = y + r ;
x3 = x ;
y3 = y + r ;
}
void setA(float a, float b){
x = a ;
y = b ;
x1 = x + r ;
y1 = y ;
x2 = x + r ;
y2 = y + r ;
x3 = x ;

y3 = y + r ;
}
void print(){
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
};

class Triangle : public TwoDShape {
private:
int x1, x2, y1, y2 ;
public:
float findArea(){
S=(r*r*sqrt(3)/2 /2);
return S;
}
float findPerimeter(){
return 3 * r ;
}
Triangle() : TwoDShape("Gurvaljin"){
}
Triangle(char *ner, int a, int b, int urt) : TwoDShape(ner, a, b, urt){
y1 = r * cos(30 * PI /180.00) + y;
y2 = r * cos(30 * PI /180.00) + y;
x1 = r * sin(30 * PI/180.00) + x;
x2 = x - r * sin(30 * PI/180.00);
}
void setLength(float l){
r = l ;
}

void setA(float a, float b){
y = b ;
y1 = r * cos(30 * PI /180.00) + y;
y2 = r * cos(30 * PI /180.00) + y;
x1 = r * sin(30 * PI/180.00) + x;
x2 = x - r * sin(30 * PI/180.00);
}
void print(){
cout <<"Ner: " << name << endl;
cout << "Koordinatuud: " << endl;
cout << "a(" << x << ", " << y << ") ";
cout << "b(" << x1 << ", " << y1 << ") ";
cout << "c(" << x2 << ", " << y2 << ") " << endl;
cout << "Urt: " << r << " " << endl;
cout << "Talbai: " << findArea() << endl;
cout << "Perimeter: " << findPerimeter() << endl << endl;
}
};
int main(){
TwoDShape *shp;
Circle a("Dugui", 10, 10, 5) ;
Circle b("Dugui", 10, 10, 4) ;
Square c("Kvadrat", 10, 10, 3);
Square d("Kvadrat", 10, 10, 2);
Triangle e("Gurvaljin", 10, 10, 8);
Triangle f("Gurvaljin", 10, 10, 5);
TwoDShape *shapes[6];
shapes[0]=&a;
shapes[1]=&b;
shapes[2]=&c;
shapes[3]=&d;
shapes[4]=&e;
shapes[5]=&f;
for(int i=0; i<6; i++){
for(int j=i+1; j<6; j++){
if(shapes[i]->findArea()>shapes[j]->findArea()){
shp=shapes[i];
shapes[i]=shapes[j];
shapes[j]=shp;

}
}
}
cout<<"Ur dun: \n";
for(int i=0; i<6; i++){
shapes[i]->print();
cout<<endl;
}
}