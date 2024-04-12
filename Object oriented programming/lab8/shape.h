#ifndef __shape__
#define __shape__
#include<iostream>
#include<string.h>
using namespace std;
class Shape {
protected:
    char *name;

public:
    static int count ;
    static int getter() ;
    static void setter() ;
    void setName(const char *name);
    char *get_name();
    Shape();
    Shape(const char *name);
    ~Shape();
 };
 #endif