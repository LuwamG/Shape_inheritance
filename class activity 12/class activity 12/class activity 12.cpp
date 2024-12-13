// class activity 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        fact *=i;
        cout << n << endl;
    }
    
}

