#include "chipher.h"
#include<iostream>
using namespace std;

int main()
{
    int n, m,l;
    cin>>n;
    m=encrypt(n);
    cout<<"encrypted code is "<<m<<endl;
    cin>>l;
     cout<<"decrypted number is "<<decrypt(l)<<endl;
    if(n == decrypt(l))
    {
        cout<<"It is proven by C++ decryption code!!"<<endl;
    }
}