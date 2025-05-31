#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    char choice;

    do
    {
        cout << "Simple Calculator\n";
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        double result;
        bool valid = true;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Error: Division by zero!\n";
                valid = false;
            }
            else
            {
                result = num1 / num2;
            }
            break;
        default:
            cout << "Invalid operator!\n";
            valid = false;
        }

        if (valid)
            cout << "Result: " << result << "\n";

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;
        cout << "\n";

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator exited.\n";
    return 0;
}
