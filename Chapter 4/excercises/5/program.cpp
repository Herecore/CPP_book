// recieves numbers as input and an operation to produce the result
#include "std_lib_facilities.h"

int main()
{
    cout << "Welcome to simple calculator! It is able to do basic math "
        << "operations with 2 numbers. \nSupported operations include:\n "
        << "\t**Operation**\t\t**Code you'll have to enter**\n"
        << "\tAddition\t\t\t+ OR plus\n"
        << "\tSubstraction\t\t\t- OR minus\n"
        << "\tMultiplication\t\t\t* OR mul\n"
        << "\tDivision\t\t\t/ OR div\n"
        << "CTRL+C to exit...\n";

    double num1, num2;
    string oper = "0";

    while (true) {
        cout << "Enter the first number, operation code, and a second number "
            << "(space-separated): ";
        cin >> num1 >> oper >> num2;

        // Addition
        if (oper == "+" or oper == "plus")
            cout << num1 << " plus " << num2 << " equals " 
                << num1 + num2 << endl;

        // Substraction
        if (oper == "-" or oper == "minus")
            cout << num1 << " minus " << num2 << " equals " 
                << num1 - num2 << endl;

        // Multiplication
        if (oper == "*" or oper == "mul")
            cout << num1 << " times " << num2 << " equals " 
                << num1 * num2 << endl;

        // Division
        if (oper == "/" or oper == "div")
            cout << num1 << " divided by " << num2 << " equals " 
                << num1 / num2 << endl;
    }
}
