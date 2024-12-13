// header.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 #include "practice1.cpp"
#include <iostream>
using namespace std;
double total_grades(int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += scores[i];
    }
    return sum;
}
