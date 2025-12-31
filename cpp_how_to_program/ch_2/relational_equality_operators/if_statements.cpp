#include <iostream>

using namespace std;

int main() {
    long num_1, num_2 {};

    cout << "enter two integers: ";
    cin >> num_1 >> num_2;

    if (num_1 > num_2)
        cout << num_1 << " > " << num_2 << endl;
    if (num_1 < num_2)
        cout << num_1 << " < " << num_2 << endl;
    if (num_1 >= num_2)
        cout << num_1 << " >= " << num_2 << endl;
    if (num_1 <= num_2)
        cout << num_1 << " <= " << num_2 << endl;
    if (num_1 == num_2)
        cout << num_1 << " == " << num_2 << endl;
    if (num_1 != num_2)
        cout << num_1 << " != " << num_2 << endl;


    return 0;
}