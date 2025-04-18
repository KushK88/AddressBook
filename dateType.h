#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
private:
    int month;
    int day;
    int year;

public:
    dateType(int month = 0, int day = 0, int year = 0);
    void setDate(int month, int day, int year);
    void printDate() const;
    int getMonth() const;
};

#endif
