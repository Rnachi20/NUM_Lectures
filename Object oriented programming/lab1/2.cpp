/*2. Тойргийн радиусыг гараас авч талбайг бодож хэвлэ.*/
#include <iostream>
using namespace std;

int main(){
    int r, S; /*Хэрэглэгдэж буй хувьсагчуудаа зарлана*/
    cout<<"Radiusaa oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    cin>>r; /*Хувьсагчийн утгуудыг гараас уншиж авна*/
    S=3.14*r*r; /*Талбайг бодож S хувьсагчид хадгалах*/
    cout<<"Talbai ni: "<<S;/*Олдсон тоогоо хэвлэх*/
}