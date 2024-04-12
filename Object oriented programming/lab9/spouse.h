#ifndef __spouse__
#define __spouse__
#include "person.h"

class Spouse: public Person{
protected:
    Date AnniversaryData;
public:
    Date getAnniversaryData();
    void setAnniversaryData(Date gerlesenJil);
};
 #endif