/*10. Өгөгдсөн тоо анхны тоо эсэхийг шалга.*/
#include <iostream>
using namespace std;

int main(){
    int n, a[100], count=0; /*Хэрэглэгдэх хувьсагчуудаа зарлаж хэрэгтэй бол утга оноож өгнө*/
    cout<<"N toog oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    cin>>n;/*Хувьсагчийн утгуудыг гараас уншиж авна*/
    for(int i=1; i<=n;i++){ /*Өөрөөс нь бага бүх тоонууд өөрт нь хуваагдаж байгаа эсэхийг шалгана*/
        if(n%i==0){
            count++;
        }
    }
    if(count==2){ /*Өөртөө болон 1-т хуваагдах буюу count нь 2 байх тоо нь анхны тоо мөн*/
        cout<<"Ene too anhnii too mun"; 
    }else{
        cout<<"Ene too anhnii too bish";
    }
}