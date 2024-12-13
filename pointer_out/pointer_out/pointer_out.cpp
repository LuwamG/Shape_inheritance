// pointer_out.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


    int main() {
        int x = 10;
        int y = 20;
        int* ptr = &x;
        *ptr = 2;
        ptr = &y;
        *ptr *= 3;
        cout << x << y;
        return 0;
    }


