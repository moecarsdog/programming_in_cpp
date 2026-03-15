#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void print_array(int const (arr)[12]);

int main () {
    int array_1[12] {};
    

    for (int i{0}; i < 12; ++i) {
        array_1[i] = i;
    }
    print_array(array_1);

    int array_2[12] {1, 2, 3}; //brace init
    print_array(array_2);


    return 0;
}

void print_array(int const (arr)[12]) { //output array elements
    cout << "Element" << setw(10) << "Value" << endl;
    for (int i{}; i < 12; ++i) {
        cout << setw(7) << i << setw(10) << arr[i] << endl;
    }

}