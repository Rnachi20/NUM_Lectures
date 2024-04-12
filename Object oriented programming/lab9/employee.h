#ifndef __employee__
#define __employee__
#include "person.h"
#include "spouse.h"
#include "child.h"
#include "division.h"
#include "jobdescription.h"
class Employee: public Person{
protected:
    string CompanyID;
    string Title;
    Date StartDate;
public:
//Burdel haritsaani horiglolt
    Spouse *hos;
    vector<Child> children;
    Division Div;
    vector<JobDescription> desc;
    Employee();
    string getCompanyID();
    string getTitle();
    Date getStartDate();
    void setCompanyID(string ID);
    void setTitle(string bairSuuri);
    void setStartDate(Date ehelsenOgnoo);
};
 #endif