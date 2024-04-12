#include "employee.h"

Employee::Employee(){
    JobDescription tmp;
    tmp.setDescription("default");
    CompanyID="default";
    Title="default";
    StartDate.day=1;
    StartDate.month=1;
    StartDate.year=2000;
    desc.push_back(tmp);
}
string getCompanyID(){
return this->CompanyID;
}
string getTitle(){
return this->Title;
}
Date getStartDate(){
return this->StartDate;
}
void setCompanyID(string ID){
this->CompanyID=ID;
}
void setTitle(string bairSuuri){
this->Title=bairSuuri;
}
void setStartDate(Date ehelsenOgnoo){
this->StartDate=ehelsenOgnoo;
}