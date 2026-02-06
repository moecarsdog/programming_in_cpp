/* Comand Line Interface Calculator*/
#include <iostream>

using namespace std;

int main() {
    long double operand, result {};
    char operation, cont_oper{};
    bool is_over {0};

    cout << "--- CLI Calculator ---" << endl;

    cout << "\nEnter starting value: ";
    cin >> result;

    while (is_over == false) {
        cout << "Enter operand: ";
        cin >> operand;
        system("clear");

        cout << "\n---- Operations -----" << endl;
        cout << "| Addition:      '+' |" << endl;
        cout << "| Subtraction:   '-' |" << endl;
        cout << "| Mutiplication: '*' |" << endl;
        cout << "| Division:      '/' |" << endl;
        cout << "----------------------" << endl;
        
        cout << "\nEnter operation: ";
        cin >> operation;
        cout << endl;
        system("clear");

        switch(operation) {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                result /= operand;
                break;
            default:
                cout << "Invalid operation." << endl;
        }

        cout << "\nResult: " << result << endl;
        cout << "Continue (y/n)? ";
        cin >> cont_oper;

        switch(cont_oper) {
            case 'y':
                is_over = 0;
                break;
            case 'n':
                is_over = 1;
                break;
            default:
                cout << "Invalid operation." << endl;
        }

    }
    system("clear");

    return 0;
}