/* Determines smallest and largest of 5 integers */
#include <iostream>

using namespace std;

int main() {
    long int_1, int_2, int_3, int_4, int_5 {};

    cout << "Enter five integers: ";
    cin >> int_1 >> int_2 >> int_3 >> int_4 >> int_5;

    if (int_1 > int_2)
        if (int_1 > int_3)
            if (int_1 > int_4)
                if (int_1 > int_5)
                    cout << "Largest is " << int_1 << endl;
    if (int_2 > int_1)
        if (int_2 > int_3)
            if (int_2 > int_4)
                if (int_2 > int_5)
                    cout << "Largest is " << int_2 << endl;
    if (int_3 > int_1)
        if (int_3 > int_2)
            if (int_3 > int_4)
                if (int_3 > int_5)
                    cout << "Largest is " << int_3 << endl;
    if (int_4 > int_1)
        if (int_4 > int_2)
            if (int_4 > int_3)
                if (int_4 > int_5)
                    cout << "Largest is " << int_4 << endl;
    if (int_5 > int_1)
        if (int_5 > int_2)
            if (int_5 > int_3)
                if (int_5 > int_4)
                    cout << "Largest is " << int_5 << endl;

    if (int_1 < int_2)
        if (int_1 < int_3)
            if (int_1 < int_4)
                if (int_1 < int_5)
                    cout << "Smallest is " << int_1 << endl;
    if (int_2 < int_1)
        if (int_2 < int_3)
            if (int_2 < int_4)
                if (int_2 < int_5)
                    cout << "Smallest is " << int_2 << endl;
    if (int_3 < int_1)
        if (int_3 < int_2)
            if (int_3 < int_4)
                if (int_3 < int_5)
                    cout << "Smallest is " << int_3 << endl;
    if (int_4 < int_1)
        if (int_4 < int_2)
            if (int_4 < int_3)
                if (int_4 < int_5)
                    cout << "Smallest is " << int_4 << endl;
    if (int_5 < int_1)
        if (int_5 < int_2)
            if (int_5 < int_3)
                if (int_5 < int_4)
                    cout << "Smallest is " << int_5 << endl;                    

    return 0;
}