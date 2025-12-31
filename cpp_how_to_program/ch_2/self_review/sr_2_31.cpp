/* Calculates total cost to drive a certain distance in a day */
#include <iostream>

using namespace std;

int main() {
    long double tot_mi_driven, cost_per_gal, ave_mi_per_gal, parking_fee,
         tolls, tot_cost{};

    cout << "Total miles driven: ";
    cin >> tot_mi_driven;
    cout << "Cost per gallon: ";
    cin >> cost_per_gal;
    cout << "Average miles per gallon: ";
    cin >> ave_mi_per_gal;
    cout << "Parking fees: ";
    cin >> parking_fee;
    cout << "Tolls: ";
    cin >> tolls;

    tot_cost = ((tot_mi_driven / ave_mi_per_gal) * cost_per_gal) + parking_fee + tolls;

    cout << "Total cost: " << tot_cost << endl;

    return 0;
}