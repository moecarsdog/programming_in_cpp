#include <iostream>
#include <iomanip>

using namespace std;

unsigned long fib(unsigned int);

int main() {
    unsigned long n {};

    for(int i {0}; i <= 10; ++i) {
        if (i == 10)
            cout << "F" << i << ": " << setw(4) << fib(i) << endl;
        else
            cout << "F" << i << ": " << setw(5) << fib(i) << endl;
    }

    return 0;
}

unsigned long fib(unsigned int n) { // recursively calculates fibonacci

    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;

    return fib(n - 1) + fib(n - 2);
}