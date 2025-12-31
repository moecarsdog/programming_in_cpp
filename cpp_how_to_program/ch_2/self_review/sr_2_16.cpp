/* Arithmetic operations */
#include <iostream>

using namespace std;

int main() {
    long int_1, int_2 {};

    cout << "Enter two numbers: ";
    cin >> int_1 >> int_2;

    cout << "sum: " << int_1 + int_2 << endl;
    cout << "product: " << int_1 * int_2 << endl;
    cout << "difference: " << int_1 - int_2 << endl;
    cout << "quotient: " << int_1 / int_2 << endl;

    return 0;
}