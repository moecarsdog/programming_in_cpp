/* Calculates diameter, circumference, and area of circle */
#include <iostream>

using namespace std;

int main() {
    long r {};

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Diameter: " << 2 * r << endl;
    cout << "Circumference: " << 2 * 3.14159 * r << endl;
    cout << "Area: " << 3.14159 * r * r << endl;

    return 0;
}