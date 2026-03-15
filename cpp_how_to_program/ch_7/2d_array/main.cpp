#include <iostream>
#include <array>

using namespace std;

int main() {
    int array[2][3] {1, 2, 3, 4, 5, 6};

    for (int i {}; i < 2; ++i) {
        for (int j {}; j < 3; ++j) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }

    for (auto const& row : array) {
        for (auto const& col : row) {
            cout << col << ' '; 
        }
        cout << endl;
    }


    return 0;
}