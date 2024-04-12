#include "encode.h"

int encrypt(int a){
    return (a*2+21)*3-17;
}

int decrypt(int a){
    return ((a+17)/3-21)/2;
}