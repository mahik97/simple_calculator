#include <iostream>
using namespace std;

    int main () {

        // Use '+' for addition
        // Use '-' for subtraction
        // Use '*' for multiplication
        // Use '/' for division

        double first_number;
        double second_number;
        char op;

        cout << "************************SIMPLE_CALCULATOR************************" << endl;

        cout << "Enter the first number: ";
        cin >> first_number;

        cout << "Enter the second number: ";
        cin >> second_number;

        cout << "Enter the operator: ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "Result: " << first_number + second_number << endl;
            break;
        
        case '-':
            cout << "Result: " << first_number - second_number << endl;
            break;

        case '*':
            cout << "Result: " << first_number * second_number << endl;
            break;

        case '/':
            cout << "Result: " << first_number / second_number << endl;
            break;

        default:
            cout << "You didn't enter a valid operator(+,-,*,/)";
        }

        cout << "************************Made by mahik97************************" << endl;
        system("pause");


        return 0;
    }