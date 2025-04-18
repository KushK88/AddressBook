#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include "personType.h"
#include "addressType.h"
#include "dateType.h"

class extPersonType : public personType {
private:
    addressType address;
    dateType dateOfBirth;
    string phoneNumber;
    string personType;

public:
    extPersonType(string first = "", string last = "", string street = "", string city = "",
                  string state = "", string zip = "", int month = 0, int day = 0, int year = 0,
                  string phone = "", string type = "");
    void setData(string first, string last, string street, string city, string state, string zip,
                 int month, int day, int year, string phone, string type);
    string getType() const;
    int getBirthMonth() const;
    void printPersonInfo() const;
};

#endif
