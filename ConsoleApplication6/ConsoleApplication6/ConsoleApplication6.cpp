// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//creating reverse array

#include <iostream>
using namespace std;
int main()
{
   /* int numbers[] = {10,20,30};
    
    int* ptr1= &numbers[size(numbers)-1];
   /* for (int i = 0; i <3; i++) {
        cout << *(ptr1)<< " ";
        ptr1--;
    }
    while (ptr1 >= numbers) {
        cout << *ptr1 << endl;
        ptr1--;
    }
    */
    int* numbers = new int[5];
    int entries = 0;
    while (true) {
        cout << "numbers"<<endl;
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        
    }

    for (int i = 0; i < entries; i++) {
        cout << numbers[i] << endl;
    }
     return 0;}

