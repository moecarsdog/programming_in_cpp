/* Determines maximum number of three integers*/
#include <iostream>

using namespace std;

// function prototype
int maximum(int x, int y, int z);

int main() {
    int x, y, z {};

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    cout << "Maximum int is: " << maximum(x, y, z) << endl;

    return 0;
}

int maximum(int x,int y,int z) {
    int max_int {x};

    if (y > max_int)
        max_int = y;
    if (z > max_int)
        max_int = z;

    return max_int;
}