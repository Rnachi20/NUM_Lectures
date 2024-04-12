
#include "employee.h"
using namespace std;


int main(){
    Division D1,D2,D3;
    JobDescription JD1,JD2,JD3;
    Employee E1,E2,E3;
    Spouse Sp1,Sp2,Sp3;
    Child Ch1,Ch2,Ch3;
    struct Date date1, date2, date3;
    D1.setDivisionName("1-r Heltes");
    D2.setDivisionName("2-r Heltes");
    D3.setDivisionName("3-r heltes");
    JD1.setDescription("Udirdah");
    JD2.setDescription("Tusul bolovsruulah");
    JD3.setDescription("Web development");
    Ch1.setName("Tsetseg");
    Ch2.setName("Tushig");
    Ch3.setName("Margad");
    Ch1.setAge(5);
    Ch2.setAge(6);
    Ch3.setAge(7);
    Ch1.setFavoriteToy("Barbie");
    Ch2.setFavoriteToy("Mashin");
    Ch3.setFavoriteToy("Ludo");
    date1.day=5;
    date1.month=3;
    date1.year=1998;
    date2.day=17;
    date2.month=6;
    date2.year=1999;
    date3.day=1;
    date3.month=2;
    date3.year=2000;
    Sp1.setAnniversaryData(date1);
    Sp2.setAnniversaryData(date2);
    Sp3.setAnniversaryData(date3);
    //employee tus buriin divisioniig zaaj ugsun
    E1.Div=D1;
    E2.Div=D2;
    E3.Div=D3;
    //employee tus buriin JobDescription
    E1.desc.push_back(JD1);
    E2.desc.push_back(JD2);
    E3.desc.push_back(JD3);
    //employee tus buriin Spouse
    E1.hos = &Sp1;
    E2.hos = &Sp2;
    E3.hos = &Sp3;
    //employee tus buriin children
    E1.children.push_back(Ch1);
    E2.children.push_back(Ch2);
    E3.children.push_back(Ch3);
    E1.setName("Bilguun");
    E3.setName("Gerel");
    E2.setName("Bat");
    E1.setSSNum("OP10000001");
    E2.setSSNum("OP10000002");
    E3.setSSNum("OP10000002");
    E1.setAge(30);
    E2.setAge(31);
    E3.setAge(32);
    E1.setCompanyID("Max");
    E2.setCompanyID("Unitel");
    E3.setCompanyID("Amazon");
    E1.hos->setName("Sainaa");
    E2.hos->setName("Saruul");
    E3.hos->setName("Enkjin");
    //object1-iig hevleh
    cout << "*****************Huviin-medeelel*****************"<< endl;
    cout<<"Name:\t\t\t"<<E1.getName()<<endl;
    cout<<"SSN:\t\t\t"<<E1.getSSNum()<<endl;
    cout<<"Age:\t\t\t"<<E1.getAge()<<endl;
    cout<<"Company:\t\t"<<E1.getCompanyID()<<endl;
    cout<<"SpouseName:\t\t"<<E1.hos->getName()<<endl;
    Date da = E2.hos->getAnniversaryData();
    cout<<"AnniversaryData:\t"<<da.month<<"/"<<da.day<<"/"<<da.year<<endl;
    Ch1 = E1.children.at(0);
    cout<<"Child's Name:\t\t"<<Ch1.getName()<<endl;
    cout<<"Child's age:\t\t"<<Ch1.getAge()<<endl;
    cout<<"Child's favoriteToy:\t"<<Ch1.getFavoriteToy()<<endl;
    cout<<"DivisionName:\t\t"<<E1.Div.getDivisionName()<<endl;
    JD1 = E1.desc.at(1);
    cout<<"Decsription:\t\t"<<JD1.getDescription()<<endl;
    //object2-iig hevleh
    cout << "********************Huviin-medeelel*********************" << endl;
    cout<<"Name:\t\t\t"<<E2.getName()<<endl;
    cout<<"SSN:\t\t\t"<<E2.getSSNum()<<endl;
    cout<<"Age:\t\t\t"<<E2.getAge()<<endl;
    cout<<"Company:\t\t"<<E2.getCompanyID()<<endl;
    cout<<"SpouseName:\t\t"<<E2.hos->getName()<<endl;
    da = E2.hos->getAnniversaryData();
    cout<<"AnniversaryData:\t"<<da.month<<"/"<<da.day<<"/"<<da.year<<endl;
    Ch1 = E2.children.at(0);
    cout<<"Child's Name:\t\t"<<Ch1.getName()<<endl;
    cout<<"Child's age:\t\t"<<Ch1.getAge()<<endl;
    cout<<"Child's favoriteToy:\t"<<Ch1.getFavoriteToy()<<endl;
    cout<<"DivisionName:\t\t"<<E2.Div.getDivisionName()<<endl;
    JD1 = E2.desc.at(1);
    cout<<"Decsription:\t\t"<<JD1.getDescription()<<endl;
    //object3-iig hevleh
    cout << "******************Huviin-medeelel********************" << endl;
    cout<<"Name:\t\t\t"<<E3.getName()<<endl;
    cout<<"SSN:\t\t\t"<<E3.getSSNum()<<endl;
    cout<<"Age:\t\t\t"<<E3.getAge()<<endl;
    cout<<"Company:\t\t"<<E3.getCompanyID()<<endl;
    cout<<"SpouseName:\t\t"<<E3.hos->getName()<<endl;
    da = E3.hos->getAnniversaryData();
    cout<<"AnniversaryData:\t"<<da.month<<"/"<<da.day<<"/"<<da.year<<endl;
    Ch1 = E3.children.at(0);
    cout<<"Child's Name:\t\t"<<Ch1.getName()<<endl;
    cout<<"Child's age:\t\t"<<Ch1.getAge()<<endl;
    cout<<"Child's favoriteToy:\t"<<Ch1.getFavoriteToy()<<endl;
    cout<<"DivisionName:\t\t"<<E3.Div.getDivisionName()<<endl;
    JD1 = E3.desc.at(1);
    cout<<"Decsription:\t\t"<<JD1.getDescription()<<endl;
    return 0;
}
