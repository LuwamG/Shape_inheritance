#ifndef DATE_HPP
#define DATE_HPP
#include <iostream>
using namespace std;
class Date {
public:
    int day;
    int month;
    int year;

    // Constructor to initialize Date object
    Date(int day, int month, int year) : day(day), month(month), year(year) {}

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }
};

class Time {
public:
    int hour;
    int minute;
    int second;

    // Constructor to initialize Time object
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

    int getHour() const;

    int getMinute() const;

    int getSecond() const;
    
};

class DateTime : public Date, public Time {
public:
    // Constructor to initialize both Date and Time
    DateTime(int day, int month, int year, int hour, int minute, int second)
        : Date(day, month, year), Time(hour, minute, second) {
    }

    // Method to display DateTime
    void displayDateTime() const;
       
};

#endif
