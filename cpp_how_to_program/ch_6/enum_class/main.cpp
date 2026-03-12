/* Example of enumerated class */
#include <iostream>

using namespace std;

int main() {
    enum class Enumeration {ENUM_1, ENUM_2, ENUM_3};

    Enumeration my_enum;

    my_enum = Enumeration::ENUM_1;
    
    if (my_enum == Enumeration::ENUM_1)
        cout << 0 << endl;

    my_enum = Enumeration::ENUM_2;

    if (my_enum == Enumeration::ENUM_2)
        cout << 1 << endl;

    my_enum = Enumeration::ENUM_3;

    if (my_enum == Enumeration::ENUM_3)
        cout << 2 << endl;

    return 0;
}