
#include "Date_Inheritance.hpp"
#include <iostream>
using namespace std;
int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}
// Method to display DateTime
void DateTime::displayDateTime() const {
    cout << getDay() << "/" << getMonth() << "/" << Date::getYear() << " ";
    cout << getHour() << ":" << getMinute() << ":" << getSecond() << std::endl;
}