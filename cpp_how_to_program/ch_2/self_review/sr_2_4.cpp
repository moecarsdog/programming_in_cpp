/* Self review 2.4 */
#include <iostream>

using namespace std;

int main() {
    int  x, y, z, result {};

    cout << "Enter three integers: ";
    cin >> x;
    cin >> y;
    cin >> z;

    result = x + y + z;

    cout << "The product is " << result << endl;

    return 0;
}