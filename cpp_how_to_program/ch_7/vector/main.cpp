#include <iostream>
#include <vector>

using namespace std;

void output_vec(vector<int>&);
void input_vec(vector<int>&);

int main() {
    vector<int> a(10);
    vector<int> b(5);

    cout << "Size of vector a is " << a.size() << endl;
    cout << "Size of vector b is " << b.size() << endl;

    output_vec(a);
    output_vec(b);

    input_vec(a);
    input_vec(b);

    output_vec(a);
    output_vec(b);

    a.push_back(100);
    b.push_back(200);

    output_vec(a);
    output_vec(b);

    a.pop_back();
    b.pop_back();

    output_vec(a);
    output_vec(b);

    vector<int> c{a};

    output_vec(c);

    return 0;
}

void output_vec(vector<int>& vec) {
    cout << "[ ";
    for (int elem : vec) {
        cout << elem << ' ';
    }
    cout << ']' << endl;
}
void input_vec(vector<int>& vec) {
    for (int& elem : vec) {
        cout << "Enter int: ";
        cin >> elem;
    }
}