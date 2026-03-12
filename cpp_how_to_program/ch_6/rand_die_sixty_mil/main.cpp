/* Rolls die 60,000,000 times and outputs frequency */
#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main() {
    unsigned int freq_1 {0};
    unsigned int freq_2 {0};
    unsigned int freq_3 {0};
    unsigned int freq_4 {0};
    unsigned int freq_5 {0};
    unsigned int freq_6 {0};
    int roll {0};

    for (unsigned int i {1}; i <= 60'000'000; ++i) {
        roll = (1 + (rand() % 6));

        switch(roll) {
            case 1:
                ++freq_1;
                break;
            case 2:
                ++freq_2;
                break;
            case 3:
                ++freq_3;
                break;
            case 4:
                ++freq_4;
                break;
            case 5:
                ++freq_5;
                break;
            case 6:
                ++freq_6;
                break;
            default:
                break;

        }
    }
    cout << "Frequency 1:" << setw(10) << freq_1 << endl;
    cout << "Frequency 2:" << setw(10) << freq_2 << endl;
    cout << "Frequency 3:" << setw(10) << freq_3 << endl;
    cout << "Frequency 4:" << setw(10) << freq_4 << endl;
    cout << "Frequency 5:" << setw(10) << freq_5 << endl;
    cout << "Frequency 6:" << setw(10) << freq_6 << endl;

    return 0;
}