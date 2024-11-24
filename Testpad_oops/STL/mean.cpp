#include <iostream>
#include <vector>
using namespace std;

// Function to compute the mean of a vector of integers
double mean(const vector<double>& vec) 
{
    if (vec.empty()) 
    {
        return 0.0;  // If the vector is empty, return 0.0
    }

    double sum = 0.0;
    for (double num : vec) 
    {
        sum += num;  // Add each element to the sum
    }

    return sum / vec.size();  // Return the average
}

int main() 
{
    int N;
    cin >> N;

    vector<double> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    cout << mean(vec) << endl;

    return 0;
}