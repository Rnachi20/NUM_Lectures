#ifndef __child__
#define __child__
#include "person.h"

class Child:public Person{
protected:
    string FavoriteToy;
public:
    string getFavoriteToy();
    void setFavoriteToy(string durtaiTogloom);
};
 #endif