/*6. Өгөгдсөн N ширхэг тооны хамгийн их/хамгийн багыг ол.*/
#include <iostream>
using namespace std;

int main(){
    int n, max, min, a[100]; /*Хэрэглэгдэх хувьсагчуудаа зарлаж хэрэгтэй бол утга оноож өгнө*/
    cout<<"N toog oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    cin>>n; /*Хувьсагчийн утгуудыг гараас уншиж авна*/
    cout<<"N shirheg random too oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    for(int i=0; i<n; i++){ /*Хүснэгтэд олон утгууд хадгалах тул давталт ашигласан*/
        cin>>a[i]; /*Хувьсагчийн утгуудыг гараас уншиж авна*/
    }
    max=a[0]; /*Хамгийн их утгыг эхний элемент гэж үзье */
    min=a[0]; /*Хамгийн бага утгыг эхний элемент гэж үзье */
    for(int i=0; i<n; i++){
        if(a[i]>max){ /*Хэрвээ Max-ийн утгаас их утга хүснэгтэнд гарч ирвэл түүнийг Max-т хэвлэнэ*/
            max=a[i];
        }else if(a[i]<min){/*Хэрвээ Min-ийн утгаас их утга хүснэгтэнд гарч ирвэл түүнийг Max-т хэвлэнэ*/
            min=a[i];
         }
    }
    cout<<"Hamgiin ih ni: "<< max <<endl; /*Хамгийн их утгыг хэвлэнэ*/
    cout<<"Hamgiin baga ni: "<< min <<endl; /*Хамгийн бага утгыг хэвлэнэ*/
}