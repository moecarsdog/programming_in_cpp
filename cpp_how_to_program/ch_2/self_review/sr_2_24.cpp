/* Determines if a integer is even or odd */
#include <iostream>

using namespace std;

int main() {
    long num {};

    cout << "Enter integer: ";
    cin >> num;

    if ((num % 2) != 0)
        cout << "Odd" << endl;
    if ((num % 2) == 0)
        cout << "Even" << endl;
    
    return 0;
}