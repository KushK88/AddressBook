#include "dateType.h"
#include <iostream>
using namespace std;

dateType::dateType(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

void dateType::setDate(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

void dateType::printDate() const {
    cout << month << "-" << day << "-" << year << endl;
}

int dateType::getMonth() const {
    return month;
}
