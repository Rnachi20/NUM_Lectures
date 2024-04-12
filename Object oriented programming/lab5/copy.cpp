#include<iostream>
#include<string.h>
using namespace std;
float undsen_tsalin=5000;
//employee nertei class zarlasan
class employee{
    // private handaltiin tuvshin
    private:
        //gitsuun ugugdluudiin zarlalt
        int dugaar;
        char *ner;
        char *tushaal;
        float tsag;
        float ceo_salary();
    //public handaltiin tuvshin
    public:
        //gishuun ugugduld handah set functsuudiin zarlalt
        void set_id(int _dugaar);
        void set_name(char *_ner);
        void set_position(char *_tushaal);
        void set_hour(float _tsag);
        void set_data(int d, char *n, char *t, float ts);


        //gishuun ugugdliin utgiig avah get funktsuudiin zarlalt
        int get_id();
        char *get_name();
        char *get_position();
        float get_hour();


        //ajiltnii ugugdliig hevlen haruulah, tsalin bodoh, ajillasan tsag nemegduuleh, ajiltnii medeelliig huulah funktsuudiin zarlalt
        void utga_onooh(employee &a);
        void print();
        float salary();
        bool tsag_nemegduuleh();
        void copy(employee &emp);
       
        //baiguulagch funkts
        employee();
        //parametertei baiguulagch funktsiin zarlalt
        employee(int d, char n[], char t[], float ts);
        //ustgagch funktsiin zarlalt
        ~employee();


};
//anhdagch baiguulagch funts ene ni umnuh lab deer todorhoilson garaanii utga onooh functstei ijil uildel hiij bga
employee::employee(){
    dugaar=0;
    //ner huvisagchid dinamikaar sanah oi nuutsluj baina
    ner = new char[20];
    strcpy(ner, "default");
    tushaal = new char[10];
    strcpy(tushaal, "ajilchin");
    tsag=0;
}
//parametertei baiguulagch functs ene ni umnuh lab deer todorhoilson hereglegchees utga avah functstei ijil uildel hiine
employee::employee(int d, char *n, char *t, float ts){
    dugaar=d;
    ner = new char[strlen(n)+1];
    strcpy(ner, n);
    tushaal = new char[strlen(t)+1];
    strcpy(tushaal, t);
    tsag=ts;
}
//ustgagch funktsiin  todorhoilolt
employee::~employee(){
    delete ner;
    delete tushaal;
    cout<<"Object deleted;"<<endl;
}
//set funktsiig todorhoilson baidal
void employee::set_id(int _dugaar){
    dugaar=_dugaar;
}
void employee::set_name(char* _ner){
    if(ner != NULL){
        delete[] ner;
    }
    ner = new char[strlen(_ner)+1];
    strcpy(ner, _ner);
}
void employee::set_position(char* _tushaal){
    delete tushaal;
    tushaal = new char[strlen(_tushaal)+1];
    strcpy(tushaal, _tushaal);
}
void employee::set_hour(float _tsag){
    tsag=_tsag;
}
//get functionii todorhoilolt
int employee::get_id(){
    return dugaar;
}
char *employee::get_name(){
    return ner;
}
char *employee::get_position(){
    return tushaal;
}
float employee::get_hour(){
    return tsag;
}


//delgets ruu printleh print funktsiin todorhoilolt
void employee::print(){
    cout<<"Ajiltnii dugaar : "<<dugaar<<endl;
    cout<<"Ajiltnii ner : "<<ner<<endl;
    cout<<"Ajiltnii alban tushaal : "<<tushaal<<endl;
    cout<<"Ajiltnii ajillasan tsag : "<<tsag<<endl;
    cout<<"_____________________________\n";
}
//ajiltnii tsaling bodoh salary functionii todorhoilolt
float employee::salary(){
    //tushaal husnegtiin utga zahiral-tai tentsej bval 0-iig butsaah tul 0-tei tentsuu baina uu gj shalgana
    if(strcmp(tushaal, "zahiral")==0){
        //tiim bol zahirliin tsaling boddog functioniig duudna
        return ceo_salary();
    }else{
        //ugui bol ajiltnii tsaling bodoj tsalin huvisagchid onoono, tsaling butsaana
        return undsen_tsalin*tsag;
    }
}
//zahirliin tsaling oldog ceo_salary functionii todorhoilolt
float employee::ceo_salary(){
        float zahiraliin_tsalin=(undsen_tsalin+(float)4000)*tsag;
        return   zahiraliin_tsalin;                                                                                                                                                                    
}
//ajiltnii ajillasan tsagiig  nemegduuleh funktsiin todorhoilolt
bool employee::tsag_nemegduuleh(){
    //nemj ajillasan tsagaa hadgalah hours huvisagch zarlaad, huvisagchid hereglegchees utga avna
    int hours;
    cout<<"heden tsagaar nemegduuleh ve : ";
    cin>>hours;
    //iluu tsag maani 0-24 tsagiin zavsar baina uu gej shalgana
    if(hours>=0 && hours<=24){
        // tiim bol tsagaa nemegduuleed true utga butsaana
        tsag=tsag+hours;
        return true;
    }else
        return false;
}
//ajiltnii medeelliig huulah funktsiin todorhoilolt
void employee::copy(employee &emp){
    dugaar=emp.get_id();
    if(ner != NULL){
        delete[] ner;
    }
    ner=new char[strlen(emp.ner)+1];
    strcpy(ner, emp.get_name());
    if(tushaal != NULL){
        delete[] tushaal;
    }
    tushaal=new char[strlen(emp.tushaal)+1];
    strcpy(tushaal, emp.get_position());
    tsag=emp.get_hour();
}


//ajilchdiig nereer ni erembelj bairiig solihdoo copy function ashiglasan
void sort1(employee emp[] , int a){
    int i,j;
    for(i = 0; i < a; i++){
        for(j = i; j > 0; j--){
            if(strcmp(emp[j].get_name() , emp[j-1].get_name())){
                employee tmp;
                tmp.copy(emp[j-1]);
                emp[j-1].copy(emp[j]);
                emp[j].copy(tmp);
            }
        }
    }
}
//ajilchdiig neriig ni haygaar ni erembelsen
void sort2(employee *emp[] , int a){
    int i,j;
    for(i = 0; i < a; i++){
        for(j = i; j > 0; j--){
            if(strcmp(emp[j]->get_name(), emp[j-1]->get_name())>0){
                employee *tmp;
                tmp;
                tmp=emp[j];
                emp[j]=emp[j-1];
                emp[j-1]=tmp;
            }
        }
    }
}
main(){
    //i buhel toon turliin huvisagch zarlasan
    int i,j;
    employee emp[3], *e[3];
    //ehnii objectiig
    for(i=0; i<3; i++){

        cout<<"Ajiltnii id-g oruul : \n";
        start:
        cin>>id;
        if(i == 0){
            emp[i].set_id(id);
        }else{
            for (int j = 0; j < i; j++){
                if (id == emp[j].get_id()){
                    cout << "Id davhatssan tul dahin Id-g oruul : "<<endl;
                    goto start;
                }
            }
            emp[i].set_id(id);
        }
        cout<<"Ajiltnii neriig oruul : \n";
        cin>>name;
        cout<<"Ajiltnii alban tushaaliig oruul : \n";
        cin>>position;
        cout<<"Ajiltnii ajillasan tsagiig oruul : \n";
        cin>>time;
        emp[i].set_name(name);
        emp[i].set_position(position);
        emp[i].set_hour(time);
        // emp objectiin haygiig objectiin haygan husnegt e-d hadgalah
        e[i]=&emp[i];
    }
    for(i=0; i<3; i++){
        emp[i].print();
    }
    while(1){
        int p, q;
        cout<<"\nAjiltnii tsaling bodoh bol 1-iig songo : \nAjillasan tsagiig nemegduuleh bol 2-iig songo : \nTsalingaar erembeleh bol 3-iig songo : \nNereer ni erembeleh bol 4-iig songo : \nNeriig haygaar ni erembeleh bol 5-iig songo : \nGarah bol 6-iig songo : \n";
        cin>>p;
        if(p==6){
            break;
        }
        if(p==1){
            cout<<"Ajiltnii dugaariig oruul : ";
            cin>>q;
            cout << "tsalin : "<<emp[q].salary()<< endl;
        }else if(p==2){
            cout<<"Ajiltnii dugaariig oruul : ";
            cin>>q;
            emp[q].tsag_nemegduuleh();
            emp[q].print();
        }else if(p==3){
            sort1(emp,3);
            for(i=0; i<3;i++){
                emp[i].print();
                cout<<emp[i].salary()<< endl;
            }
        }else if(p==4){
            sort1(emp, 3);
            for(i=0; i<4; i++){
                emp[i].print();
            }
        }else if(p==5){
            sort2(e, 3);
            for(i=0; i<4; i++){
                e[i]->print();
            }
        }
    }
}
