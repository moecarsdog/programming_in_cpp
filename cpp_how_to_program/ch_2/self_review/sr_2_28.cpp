/* Input five digit integer and seperates the digits*/
#include <iostream>

using namespace std;

int main() {
    long num {};

    cout << "Enter a five digit integer: ";
    cin >> num;

    cout << (num / 10000) << ' ' << (num / 1000) % 10 << ' ' << (num / 100) % 10
         << ' ' << (num / 10) % 10 << ' ' << num % 10 << endl;

    return 0;
}