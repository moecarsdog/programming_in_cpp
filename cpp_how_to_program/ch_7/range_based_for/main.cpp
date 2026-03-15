#include <iostream>
#include <array>

using namespace std;

int main() {
    int a[5] {1, 2, 3, 4, 5};

    for (int elem : a) { // elem iterates through array a by element
        cout << elem << ' ';
    }

    cout << endl;

    for (int& elem : a) { // elem iterates through array element addresses and modifies values
        elem *= 2;
    }
    for (int elem : a) {
        cout << elem << ' ';
    }

    cout << endl;

    return 0;
}