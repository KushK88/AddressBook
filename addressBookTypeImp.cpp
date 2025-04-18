#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void addressBookType::loadFromFile(string filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file!" << endl;
        return;
    }

    string first, last, street, city, state, zip, phone, type;
    int month, day, year;

    while (infile >> first >> last >> month >> day >> year >> phone >> type) {
        infile.ignore(); // Ignore newline
        getline(infile, street);
        getline(infile, city, ',');
        infile >> state >> zip;

        extPersonType person(first, last, street, city, state, zip, month, day, year, phone, type);
        addressBook.push_back(person);
    }

    infile.close();
}

void addressBookType::sortByLastName() {
    sort(addressBook.begin(), addressBook.end(),
         [](const extPersonType &a, const extPersonType &b) {
             return a.getLastName() < b.getLastName();
         });
}

void addressBookType::searchByLastName(string lastName) const {
    for (const auto &person : addressBook) {
        if (person.getLastName() == lastName) {
            person.printPersonInfo();
            return;
        }
    }
    cout << "Person not found." << endl;
}

void addressBookType::printByBirthMonth(int month) const {
    for (const auto &person : addressBook) {
        if (person.getBirthMonth() == month) {
            person.printName();
        }
    }
}

void addressBookType::printByLastNameRange(string start, string end) const {
    for (const auto &person : addressBook) {
        if (person.getLastName() >= start && person.getLastName() <= end) {
            person.printName();
        }
    }
}

void addressBookType::printByType(string type) const {
    for (const auto &person : addressBook) {
        if (person.getType() == type) {
            person.printName();
        }
    }
}

void addressBookType::printAll() const {
    for (const auto &person : addressBook) {
        person.printPersonInfo();
        cout << endl;
    }
}

void addressBookType::saveToFile(string filename) const {
    ofstream outfile(filename);
    if (!outfile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    for (const auto &person : addressBook) {
        outfile << person.getLastName() << endl; // Example (You can customize the format)
    }

    outfile.close();
}
