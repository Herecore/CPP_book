// Read a sequence of double values into a vector. Think of each value as the distance 
// between two cities along a given route. Compute and print the total distance (the 
// sum of all distances). Find and print the smallest and greatest distance between two 
// neighboring cities. Find and print the mean distance between two neighboring cities.
#include "std_lib_facilities.h"

int main()
{
    vector<double> distance;
    
    // Values input
    double input;
    cout << "Input the distance between each city in km (space separated):\n";
    while (cin >> input)
        distance.push_back(input);

    // Compute the sum of all distances
    double sum = 0;
    for (double x : distance)
        sum += x;
    cout << "\nTotal distance is " << sum << "km\n";

    // Smallest and greatest distance
    sort(distance);
    cout << "The smallest distance between two cities is " 
        << distance[0] << "km!\n";
    cout << "The greatest distance between two cities is " 
        << distance[int(distance.size()) - 1] << "km!\n";

    // Mean distance
    cout << "Mean distance between two cities is "
        << sum / double(distance.size()) << "km!\n";
}
