/* Determines if one integer is a multiple of the other*/
#include <iostream>

using namespace std;

int main() {
    long int_1, int_2 {};

    cout << "Enter two integers: ";
    cin >> int_1 >> int_2;

    if ((int_2 % int_1) == 0)
        cout << "Int 1 is a multiple of int 2.";
    if ((int_2 % int_1) != 0)
        cout << "Int 1 is not a multiple of int 2.";


    return 0;
}