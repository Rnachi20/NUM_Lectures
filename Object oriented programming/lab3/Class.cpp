#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class Ajilchin{
    public:
        int Dugaar;
        char Ner[20];
        char Alban_Tushaal[10];
        float Ajillasan_Tsag;

        void Garaanii_Utga_Onooh();
        void Garaas_Utga_Avah();
        void Medeelel_Delgetsleh();
        float Tsalin_Bodoh();
        float Zahirliin_Tsalin_Bodoh();
        int Ajillasan_Tsag_Nemegduuleh(float);
};

void Ajilchin::Garaanii_Utga_Onooh(){
    Dugaar=0;
    strcpy(Ner, " ");
    strcpy(Alban_Tushaal,"Ajilchin");
    Ajillasan_Tsag=0;
}

void Ajilchin::Garaas_Utga_Avah(){
    cout<<"Ajilchnii dugaariig oruulna uu: ";
    cin>>Dugaar;

    cout<<"Ajilchnii neriig oruulna uu: ";
    gets(Ner);

    cout<<"Ajilchnii alban tushaaliig oruulna uu: ";
    gets(Alban_Tushaal);

    cout<<"Ajilchnii ajillasan tsagiig oruulna uu: ";
    cin>>Ajillasan_Tsag;

}

void Ajilchin::Medeelel_Delgetsleh(){
    cout<<"Ajilchnii dugaar: "<<Dugaar<<endl;
    cout<<"Ajilchnii ner: "<<Ner<<endl;
    cout<<"Ajilchnii alban tushaal: "<<Alban_Tushaal<<endl;
    cout<<"Ajilchnii ajillasan tsag: "<<Ajillasan_Tsag<<endl; 
}

void Ajilchin::Tsalin_Bodoh(){
    if(strcpy(Alban_Tushaal,"zahiral")){
        Zahirliin_Tsalin_Bodoh();
    }
    
}

int Ajilchin::Ajillasan_Tsag_Nemegduuleh (float Ajillasan_Tsag){
    if(Ajillasan_Tsag>=0 && Ajillasan_Tsag<25){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    Ajilchin ajilchin;
    ajilchin.Dugaar=234;
    ajilchin.Ner="Huurhun";
    ajilchin.Alban_Tushaal="Ajilchin";
    ajilchin.Ajillasan_Tsag=8;
    ajilchin.Garaas_Utga_Avah();
    ajilchin.Medeelel_Delgetsleh();
}