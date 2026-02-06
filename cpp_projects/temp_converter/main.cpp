/* Basic Temperature Converter Between Celsius to 
   Fahrenheit*/
#include <iostream>
#include "string"

using namespace std;

int main() {
int choice {};
double temp {};

cout << "--- Basic Temperature Converter ---" << endl;
cout << "\n1. F -> C" << endl;
cout << "2. C -> F" << endl;
cout << "\nEnter choice (1/2): ";
cin >> choice;
system("clear");

cout << "Enter temperature (in degrees): ";
cin >> temp;
system("clear");

switch(choice) {
    case 1:
        temp = ((temp - 32) * 5) / 9;
        cout << "Temperature in Celsius: " << temp << endl;
        break;
    case 2:
        temp = ((temp * 9) / 5) + 32;
        cout << "Temperature in Fahrenhrit: " << temp << endl;
        break;
}


return 0;
}