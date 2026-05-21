#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "=== Maithili's Simple Calculator ===" <<endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /):";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
        cout << "Result: " << num1 + num2;
        break;
        case '-':
        cout << "Result" << num1 - num2;
        break;
        case '*':
        cout << "Result" << num1 * num2;
        break;
        case '/':
        if(num2 !=0)
        cout << "Result: " << num1 / num2;
    else
        cout << "Error: Division by zero is not allowed";
    break;
    default:
    cout << "Enter: Invalid Operator";
    }

    cout << "\n\nThank you for using Maithili's Calculator!";
    return 0;
}
