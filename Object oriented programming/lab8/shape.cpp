#include "shape.h"
void Shape::setName(const char *name) {
        if (this->name != nullptr) {
            delete[] this->name;
        }
       this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
Shape::Shape() {
        this->name = new char[20];
        strcpy(this->name, "default");
        cout << "Durs uusev" << endl;
    }

Shape::Shape(const char* name) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        cout << "Durs(para) uusev" << endl;
    }

Shape::~Shape() {
        delete[] this->name;
        cout << "Durs ustav" << endl;
    }

char *Shape::get_name() {
        return name;
    }

int Shape::count=0 ;

int Shape::getter(){
    return Shape::count ;
}
void Shape::setter(){
    int x ;
    cout << "Onooh utgaa bichne uu" << endl ;
    cin >> x ;
    Shape::count = x ;
}