#include "personType.h"
#include <iostream>
using namespace std;

personType::personType(string first, string last) {
    firstName = first;
    lastName = last;
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

string personType::getLastName() const {
    return lastName;
}

void personType::printName() const {
    cout << firstName << " " << lastName << endl;
}
