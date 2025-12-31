/* BMI calculator */
#include <iostream>

using namespace std;

int main() {
    long lbs, in {};

    cout << "Enter weight (lbs): ";
    cin >> lbs;
    cout << "Enter height (in): ";
    cin >> in;

    cout << "\nBMI: " << (lbs * 703) / (in * in) << endl;
    cout << "\nBMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;

    return 0;
}