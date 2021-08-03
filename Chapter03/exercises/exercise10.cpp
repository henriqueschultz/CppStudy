#include "..\..\std_lib_facilities.h"

int main()
{
    cout << "Please enter an operation, the first operand and the second operand\n";
    cout << "in the format: operation (space) operand (space) operand\n";
    cout << "the operation should be one of these +, -, *, /, plus, minus, mul, and div\n";
    cout << "e.g + 100 3.14\n";
    cout << "(press enter after)\n";

    string operation;
    double operand1;
    double operand2;

    cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus")
    {
        cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << "\n";
        return 0;
    }

    if (operation == "-" || operation == "minus")
    {
        cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << "\n";
        return 0;
    }

    if (operation == "*" || operation == "mul")
    {
        cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << "\n";
        return 0;
    }

    if (operation == "/" || operation == "div")
    {
        if (operand2 == 0)
        {
            simple_error("division by zero!");
        }
        cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << "\n";
        return 0;
    }

    simple_error("Invalid operation or not recognized!");
}