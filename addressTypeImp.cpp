#include "addressType.h"
#include <iostream>
using namespace std;

addressType::addressType(string street, string city, string state, string zip) {
    streetAddress = street;
    this->city = city;
    this->state = state;
    zipCode = zip;
}

void addressType::setAddress(string street, string city, string state, string zip) {
    streetAddress = street;
    this->city = city;
    this->state = state;
    zipCode = zip;
}

void addressType::printAddress() const {
    cout << streetAddress << endl;
    cout << city << ", " << state << " - " << zipCode << endl;
}
