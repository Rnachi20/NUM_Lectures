#include "circle.h"
#include "triangle.h"
#include "square.h"
#include <iostream>
using namespace std;

int main(){
    TwoDShape *shp;
    Circle a("Dugui", 10, 10, 6) ;
    Circle b("Dugui", 10, 10, 5) ;
    Square c("Kvadrat", 10, 10, 4);
    Square d("Kvadrat", 10, 10, 3);
    Triangle e("Gurvaljin", 10, 10, 2);
    Triangle f("Gurvaljin", 10, 10, 1);
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
    cout<<"Talbaigaar erembelsnii ur dun: \n";
    for(int i=0; i<6; i++){
        shapes[i]->print();
        cout<<endl;
    }
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if(shapes[i]->findPerimeter()>shapes[j]->findPerimeter()){
                shp=shapes[i];
                shapes[i]=shapes[j];
                shapes[j]=shp;
            }
        }
    }
    cout<<"Perimetereer erembelsnii ur dun: \n";
    for(int i=0; i<6; i++){
        shapes[i]->print();
        cout<<endl;
    }
    cout << "Niit " << Shape::count << " object shape classaas udamshin uussen baina" << endl ;
    return 0;
}