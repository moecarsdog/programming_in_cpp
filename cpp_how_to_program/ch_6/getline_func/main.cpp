#include <iostream>
#include <string>

using namespace std;

void print(const string user_output) {

    cout << user_output << endl;
}

int main() {
    string user_str {};

    cout << "Enter line of text: ";
    getline(cin, user_str);

    cout << "\n" << user_str << endl;

    cout << "Enter line of text: ";
    getline(cin, user_str);

    print(user_str);

    return 0;
}