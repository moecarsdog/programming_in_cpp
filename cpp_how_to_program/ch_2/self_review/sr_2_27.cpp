/* Prints integer equivalent of a character type */
#include <iostream>

using namespace std;

int main() {
    char character {};

    cout << "Enter a character: ";
    cin >> character;

    cout << static_cast<int>(character) << endl; //prints char as an integer

    return 0;
}