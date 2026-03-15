#include <iostream>
#include <array>

using namespace std;

int binary_search(int (&arr)[10], int low, int high, int x);

int main() {
    int array[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n {10};

    cout << "Integer found at array[" << binary_search(array, 0, 9, n) << ']' << endl;

    return 0;
}

int binary_search(int (&arr)[10], int low, int high, int x) {
    if (high >= low) {
        int mid = low + ((high - low) / 2);

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_search(arr, low, mid - 1, x);
        
        return binary_search(arr, mid + 1, high, x);
    }
    return -1;
}