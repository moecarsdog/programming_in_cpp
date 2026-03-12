/* Calculates random die rolls using seeded value*/
#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main() {
    unsigned int seed {};

    cout << "Enter seed value as integer: ";
    cin >> seed;
    srand(seed);

    for (unsigned int i {1}; i <= 10; ++i) {
        cout << setw(10) << (1 + (rand() % 6));

        if ((i % 5) == 0)
            cout << endl;
    }

    return 0;
}