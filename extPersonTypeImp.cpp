#include "extPersonType.h"
#include <iostream>
using namespace std;

extPersonType::extPersonType(string first, string last, string street, string city, string state,
                             string zip, int month, int day, int year, string phone, string type)
    : personType(first, last), address(street, city, state, zip), dateOfBirth(month, day, year) {
    phoneNumber = phone;
    personType = type;
}

void extPersonType::setData(string first, string last, string street, string city, string state,
                            string zip, int month, int day, int year, string phone, string type) {
    setName(first, last);
    address.setAddress(street, city, state, zip);
    dateOfBirth.setDate(month, day, year);
    phoneNumber = phone;
    personType = type;
}

string extPersonType::getType() const {
    return personType;
}

int extPersonType::getBirthMonth() const {
    return dateOfBirth.getMonth();
}

void extPersonType::printPersonInfo() const {
    printName();
    cout << "Date of Birth: ";
    dateOfBirth.printDate();
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Person Type: " << personType << endl;
    address.printAddress();
}
