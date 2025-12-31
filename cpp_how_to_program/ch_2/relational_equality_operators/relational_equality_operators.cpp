#include <iostream>

using namespace std;

int main() {
    int num_1, num_2, num_gt, num_lt, num_gte,
        num_lte, num_et, num_net{};
    
    cout << "num 1: ";
    cin >> num_1;
    cout << "num 2: ";
    cin >> num_2;

    num_gt = num_1 > num_2;
    num_lt = num_1 < num_2;
    num_gte = num_1 >= num_2;
    num_lte = num_1 <= num_2;
    num_et = num_1 == num_2;
    num_net = num_1 != num_2;

    cout << "num 1 > num 2: " << num_gt << endl;
    cout << "num 1 < num 2: " << num_lt << endl;
    cout << "num 1 >= num 2: " << num_gte << endl;
    cout << "num 1 <= num 2: " << num_lte << endl;
    cout << "num 1 == num 2: " << num_et << endl;
    cout << "num 1 != num 2: " << num_net << endl;

    return 0;
}