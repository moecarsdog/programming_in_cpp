#include <iostream>
#include <string>

using namespace std;

template <typename T> // typename T determines type for variable
void print(T const value) {

    cout << value << endl;

}

int main() {
    int user_int {};
    string user_str {};
    double user_flt {};

    cout << "Enter value: ";
    cin >> user_int;

    print(user_int);

    cout << "Enter string: ";
    cin >> user_str;

    print(user_str);

    cout << "Enter float: ";
    cin >> user_flt;

    print(user_flt);

    return 0;
}