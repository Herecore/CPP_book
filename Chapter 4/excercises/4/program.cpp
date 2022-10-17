/*
Write a program to play a numbers guessing game. The user thinks of a number between 1 
and 100 and your program asks questions to figure out what the number is (e.g., “Is the 
number you are thinking of less than 50?”). Your program should be able to identify the 
number after asking no more than seven questions. Hint: Use the < and <= operators and 
the if-else construct.
*/
#include "std_lib_facilities.h"

int main()
{
    // Welcome
    cout << "Hi! This program is made to guess the game you are thinking of. "
        << "Think of any number between 1 and 100 and I'll try to guess it!\a";

    // Number guessing
    char input;
    while (true) {
        cout << "Alright, let's start. Is your number less than 50? (y/n) ";
        cin >> input;
        if (input == 'y')
            cout << "\nYay! Is your number less than 25? (y/n) ";
            cin >> input;
        else if (input == 'n')
            cout << "\nArgh! Is your number less than 75? (y/n) ";
            cin >> input;

        else ()
            cout << "Wrong input! Try again...\n\n";
    }
}
