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
    double median = temps[int(temps.size()) / 2];
    if (temps.size() % 2 == 0) {
        int tmp = int(temps.size()) / 2;
        median = (temps[tmp - 1] + temps[tmp]) / 2; 
    }
    cout << "Median temperature: " << median << '\n';
}
