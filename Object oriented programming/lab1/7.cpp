/*7. Өгөгдсөн хүснэгтийн тэгш элементүүдийн тоог ол.*/
#include <iostream>
using namespace std;

int main(){
    int n, a[100], s=0; /*Хэрэглэгдэх хувьсагчуудаа зарлаж хэрэгтэй бол утга оноож өгнө*/
    cout<<"N toog oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    cin>>n; /*Хувьсагчийн утгуудыг гараас уншиж авна*/
    cout<<"N shirheg random too oruulna uu: "; /*Ойлгомжтой байлгах үүднээс дэлгэцэд заавар хэвлэн харуулна*/
    for(int i=0; i<n; i++){ /*Хүснэгтэд олон утгууд хадгалах тул давталт ашигласан*/
        cin>>a[i]; /*Хувьсагчийн утгуудыг гараас уншиж авна*/
    }
    for(int i=0; i<n; i++){ /*И хүртэл тоонуудыг гүйлгэнэ*/
            if(a[i]%2==0){ /*Хүснэгт дэх утга 2-т хуваагдаж байгаа эсэхийг шалгана*/
            s++; /*Тийм бол хувьсагчийн утгаа нэмэгдүүлнэ*/
            }
    }
    cout<<"Tegsh ni: "<< s; /*Тоолсон тэгш утгыг хэвлэнэ*/
}
