/* Basic arithmetic operations */

#include <iostream>

using namespace std;

int main() {
    long num_1, num_2 {};

    cout << "num 1: ";
    cin >> num_1;
    cout << "num 2: ";
    cin >> num_2;

    cout << "addition: " << num_1 + num_2 << endl;
    cout << "subtraction: " << num_1 - num_2 << endl;
    cout << "multiplication: " << num_1 * num_2 << endl;
    cout << "division: " << num_1 / num_2 << endl;
    cout << "remainder: " << num_1 % num_2 << endl;

    return 0;
}