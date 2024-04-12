#ifndef __person__
#define __person__
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class Person{
protected:
    string Name;
    string SSNum;
    int Age;
public:
    string getName();
    string getSSNum();
    int getAge();
    void setName(string ner);
    void setSSNum(string rd);
    void setAge(int nas);
};
 #endif