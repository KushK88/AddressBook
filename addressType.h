#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>
using namespace std;

class addressType {
private:
    string streetAddress;
    string city;
    string state;
    string zipCode;

public:
    addressType(string street = "", string city = "", string state = "", string zip = "");
    void setAddress(string street, string city, string state, string zip);
    void printAddress() const;
};

#endif
