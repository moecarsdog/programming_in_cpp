/* Rolls a die randomly and outputs 20 times */
#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main() {
    
    for (unsigned int i {1}; i <= 20; ++i) {
        cout << setw(10) << (1 + rand() % 6);

        if ((i % 5) == 0)
            cout << endl;
    }

    return 0;
}