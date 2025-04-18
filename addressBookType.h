#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include "extPersonType.h"
#include <vector>
#include <string>
using namespace std;

class addressBookType {
private:
    vector<extPersonType> addressBook;

public:
    void loadFromFile(string filename);
    void sortByLastName();
    void searchByLastName(string lastName) const;
    void printByBirthMonth(int month) const;
    void printByLastNameRange(string start, string end) const;
    void printByType(string type) const;
    void printAll() const;
    void saveToFile(string filename) const;
};

#endif
