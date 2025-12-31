/* Determines largest and smallest of 3 integers */
#include <iostream>

using namespace std;

int main() {
    long int_1, int_2, int_3;

    cout << "Enter three integers: ";
    cin >> int_1 >> int_2 >> int_3;

    cout << "Sum: " << int_1 + int_2 + int_3 << endl;
    cout << "Average: " << (int_1 + int_2 + int_3) / 3 << endl;
    cout << "Product: " << int_1 * int_2 * int_3 << endl;

    if ((int_1 > int_2) && (int_1 > int_3))
        cout << "Largest is " << int_1 << endl;
    else if ((int_2 > int_1) && (int_2 > int_3))
        cout << "Largest is " << int_2 << endl;
    else
        cout << "Largest is " << int_3 << endl;

    if ((int_1 < int_2) && (int_1 < int_3))
        cout << "Smallest is " << int_1 << endl;
    else if ((int_2 < int_1) && (int_2 < int_3))
        cout << "Smallest is " << int_2 << endl;
    else
        cout << "Smallest is " << int_3 << endl;

    return 0;
}