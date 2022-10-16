#include "std_lib_facilities.h"

// compute mean and median temperatures
int main()
{
    vector<double> temps;

    cout << "Enter the temperature values (space-separated):\n";

    for (double temp; cin>>temp; )
        temps.push_back(temp);

    double sum = 0;

    for (double x : temps) 
        sum += x;

    cout << "Average temperature: " << sum / double(temps.size()) << '\n';

    sort(temps);
    cout << "Median temperature: " << temps[int(temps.size()) / 2] << '\n';
}
