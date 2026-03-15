#include <iostream>
#include <array>

using namespace std;

int sum_of_values(int (&array)[4]);

int main () {
    int a[4] {};
    int b[4] {1, 2, 3, 4};
    int c[4] {2, 4, 6, 8};

    cout << "Sum = " << sum_of_values(a) << endl;
    cout << "Sum = " << sum_of_values(b) << endl;
    cout << "Sum = " << sum_of_values(c) << endl;

    return 0;
}

int sum_of_values(int (&array)[4]) {
    int sum {};

    for (int i{}; i < 4; ++i) {
        sum += array[i];
    }

    return sum;
}