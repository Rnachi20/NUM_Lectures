/*1. a, b, c гурван тооны хамгийн ихийг олж дэлгэцэнд хэвлэ.*/
#include <iostream> 
using namespace std; 

int main(){
    int a, b, c, d; /*Хэрэглэгдэж буй хувьсагчуудаа зарлана*/
    cout<<"Duriin 3 toog oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    cin>>a>>b>>c; /*Хувьсагчийн утгуудыг гараас уншиж авна*/
    d = ( a > b && a > c ) * a + ( b > a && b > c ) * b + ( c > a && c > b ) * c; /*3 тоог логик үйлдэл ашиглан жишиж хамгийн ихийг нь d хувьсагчид хадгална*/
    cout<<"Hamgiin ih ni: "<< d; /*Жишиж олдсон d тоогоо хэвлэх*/
}