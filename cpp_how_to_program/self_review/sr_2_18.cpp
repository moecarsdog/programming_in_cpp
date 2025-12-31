/* Dtermines wheter two numbers are less than, greater than, or equal to */
#include <iostream>

using namespace std;

int main() {
    long int_1, int_2 {};

    cout << "Enter two numbers: ";
    cin >> int_1;
    cin >> int_2;

    if (int_1 > int_2)
        cout << int_1 << " is larger." << endl;
    if (int_2 > int_1)
        cout << int_2 << " is larger." << endl;
    if (int_1 == int_2)
        cout << "These numbers are equal." << endl;

    return 0;
}