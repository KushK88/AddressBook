#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
using namespace std;

class personType {
protected:
    string firstName;
    string lastName;

public:
    personType(string first = "", string last = "");
    void setName(string first, string last);
    string getLastName() const;
    void printName() const;
};

#endif
