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
    int rangebot = 0;
    int rangetop = 100;
    double range = rangetop - rangebot;

    // Welcome
    cout << "Hi! This program is made to guess the number you are thinking of.\n" 
        << "Think of any number between " 
        << rangebot + 1 << " and " << rangetop << " and I'll try to guess it!\n\n";

    // Number guessing
    char input;
    for (int i = 1; range > 2; ++i) {
        cout << "Is your number less than " << floor(rangetop - range / 2) 
            << "? (y/n) ";
        cin >> input;

        cout << i << ". ";

        if (input == 'y') {
            rangetop = rangetop - range / 2;
            range = rangetop - rangebot;
        }

        else if (input == 'n') {
            rangebot = rangetop - range / 2;
            range = rangetop - rangebot;
        }

        else
            cout << "Wrong input! Try again...\n\n";
    }
    cout << "The number you are thinking of is "
        << rangebot << "!\nThanks for playing!\n\n";
    
}
