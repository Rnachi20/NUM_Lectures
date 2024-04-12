#include "encode.h"
#include <iostream>
using namespace std;

int main(){
    int a, b, c,d;
    cin>>a;
    b=encrypt(a);
    cout<< b <<endl;
    cin>>d;
    c=decrypt(d);
    cout<<c;
}