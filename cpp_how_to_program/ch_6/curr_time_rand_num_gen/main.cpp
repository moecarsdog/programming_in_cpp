#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0)));

    cout << 1 + (rand() % 6) << endl;

    return 0;
}