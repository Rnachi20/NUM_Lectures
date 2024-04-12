#ifndef __jobdescription__
#define __jobdescription__
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class JobDescription{
protected:
    string Description;
public:
    string getDescription();
    void setDescription(string tailbar);
};
 #endif