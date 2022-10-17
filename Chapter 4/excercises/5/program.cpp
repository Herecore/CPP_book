// recieves numbers as input and an operation to produce the result
#include "std_lib_facilities.h"

int main()
{
    double num1, num2;
    string oper = "0";

    while (true) {
        cout << "Enter the first number, second number and operation "
            << "(space-separated): ";
        cin >> num1 >> num2 >> oper;

        // Addition
        if (oper == "+")
            cout << "The sum of " << num1 << " and " << num2 << " is " 
                << num1 + num2 << endl;

        // Substraction
        if (oper == "-")
            cout << "The difference of " << num1 << " and " << num2 << " is " 
                << num1 - num2 << endl;

        // Multiplication
        if (oper == "*")
            cout << "The product of " << num1 << " and " << num2 << " is " 
                << num1 * num2 << endl;

        // Division
        if (oper == "/")
            cout << "The quotient of " << num1 << " and " << num2 << " is " 
                << num1 / num2 << endl;
    }
}
