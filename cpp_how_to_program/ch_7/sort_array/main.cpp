#include <iostream>

using namespace std;

void add_elements(int (&arr)[10]);
void print_array(int const (&arr)[10]);
void sort_ascending(int (&arr)[10]);
void sort_descending(int (&arr)[10]);

int main() {
    int array[10] {};

    add_elements(array);
    print_array(array);
    sort_ascending(array);
    print_array(array);
    sort_descending(array);
    print_array(array);

    return 0;
}

void add_elements(int (&arr)[10]) {
    for (int& elem : arr) {
        cout << "Enter integer: ";
        cin >> elem;
    }
}
void print_array(int const (&arr)[10]) {
    cout << '[';
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << ']' << endl << endl;
}
void sort_ascending(int (&arr)[10]) {
    int swap, count{};

    while (count < 10) {
        for (int i {}; i < 9; ++i) {
            if (arr[i] > arr[i + 1]) {
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
        ++count;
    }
}
void sort_descending(int (&arr)[10]) {
    int swap, count{};

    while (count < 10) {
        for (int i {}; i < 9; ++i) {
            if (arr[i] < arr[i + 1]) {
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
        ++count;
    }
}