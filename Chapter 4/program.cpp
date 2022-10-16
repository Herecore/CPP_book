/* 
Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, 
or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 
1in == 2.54cm, 1ft == 12in. Read the unit indicator into a string. You may consider 
12 m (with a space between the number and the unit) equivalent to 12m (without a space).
*/
#include "std_lib_facilities.h"

int main()
{
    vector<double> input(1);
    vector<double> values;
    constexpr double cm_to_m = 100;
    constexpr double cm_to_in = 2.54;
    constexpr double in_to_ft = 12;
    constexpr double cm_to_ft = 30.48;

    string unit = "";

    // the following will be treated as meters
    double smallest = 10000;
    double largest = 0;
    double sum = 0;
    int amount_of_values = 0;

    cout << "Enter the number following it with cm/m/in/ft: ";
    while (cin >> input[0] >> unit) {
        if (input[0] > 0) {
            double input_m = 0;
            if (unit == "cm") {
                input_m = input[0] / cm_to_m;

                cout << "The number entered equals to\n" 
                    << input[0] << "cm\n" 
                    << input_m << "m\n"
                    << input[0] / cm_to_in << "in\n"
                    << input[0] / cm_to_ft << "ft\n";


                if (input_m < smallest) {
                    smallest = input_m;
                    cout << "The smallest number yet!\n";
                }
                if (input_m > largest) {
                    largest = input_m;
                    cout << "The largest number yet!\n";
                }
                sum += input_m;
                ++amount_of_values;
                values.push_back(input_m);
            }
            else if (unit == "m") {
                input_m = input[0];

                cout << "The number entered equals to\n" 
                    << input[0] * cm_to_m << "cm\n" 
                    << input_m << "m\n"
                    << input[0] * cm_to_m / cm_to_in << "in\n"
                    << input[0] * cm_to_m / cm_to_ft << "ft\n";


                if (input_m < smallest) {
                    smallest = input_m;
                    cout << "The smallest number yet!\n";
                }
                if (input_m > largest) {
                    largest = input_m;
                    cout << "The largest number yet!\n";
                }
                sum += input_m;
                ++amount_of_values;
                values.push_back(input_m);
            }
            else if (unit == "in") {
                input_m = input[0] * cm_to_in / cm_to_m;

                cout << "The number entered equals to\n" 
                    << input[0] * cm_to_in << "cm\n" 
                    << input[0] * cm_to_in / cm_to_m << "m\n"
                    << input[0] << "in\n"
                    << input[0] / in_to_ft << "ft\n";


                if (input_m < smallest) {
                    smallest = input_m;
                    cout << "The smallest number yet!\n";
                }
                if (input_m > largest) {
                    largest = input_m;
                    cout << "The largest number yet!\n";
                }
                sum += input_m;
                ++amount_of_values;
                values.push_back(input_m);
            }
            else if (unit == "ft") {
                input_m = input[0] * cm_to_ft / cm_to_m;

                cout << "The number entered equals to\n" 
                    << input[0] * cm_to_ft << "cm\n" 
                    << input[0] * cm_to_ft / cm_to_m << "m\n"
                    << input[0] * in_to_ft << "in\n"
                    << input[0] << "ft\n";
                    

                if (input_m < smallest) {
                    smallest = input_m;
                    cout << "The smallest number yet!\n";
                }
                if (input_m > largest) {
                    largest = input_m;
                    cout << "The largest number yet!\n";
                }
                sum += input_m;
                ++amount_of_values;
                values.push_back(input_m);
            }
            else
                cout << "Incorrect unit specified! Try again...\n\n";

            cout << "\n\nEnter the number following it with cm/m/in/ft: ";
        }
        else
            cout << "The number has to be larger than 0! Try again...\n\n";
    }
    cout << "Exit sequence caught!\n";

    cout << "\n\n********Stats time!********\n\n";

    // Print the values you entered before in increasing order
    sort(values);
    cout << "All the values you entered in increasing "
        << "order (converted to meters):\n";
    for (double i: values)
        cout << i << " ";
    cout << "\n";


    cout << "\nThe smallest value you entered was:\n"
        << "\t" << smallest * cm_to_m << "cm\n" 
        << "\t" << smallest << "m\n"
        << "\t" << smallest * cm_to_m / cm_to_in << "in\n"
        << "\t" << smallest * cm_to_m / cm_to_ft << "ft\n";

    cout << "\nThe largest value you entered was:\n"
        << "\t" << largest * cm_to_m << "cm\n" 
        << "\t" << largest << "m\n"
        << "\t" << largest * cm_to_m / cm_to_in << "in\n"
        << "\t" << largest * cm_to_m / cm_to_ft << "ft\n";

    cout << "\nThe sum of values entered is:\n" 
        << "\t" << sum * cm_to_m << "cm\n" 
        << "\t" << sum << "m\n"
        << "\t" << sum * cm_to_m / cm_to_in << "in\n"
        << "\t" << sum * cm_to_m / cm_to_ft << "ft\n";

    cout << "\nThe total amount of values entered is " << amount_of_values << "!\n";

    cout << "\nExiting...\n\n";
}


