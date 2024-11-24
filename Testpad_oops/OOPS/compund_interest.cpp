#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() 
{
    float P, r, t;
    cin >> P >> r >> t;  // Input principal amount, rate, and time

    // Calculate the compound interest amount
    float A = P * pow((1 + r / 100), t);

    // Output the amount rounded to 1 decimal place
    cout << fixed << setprecision(1) << A << endl;

    return 0;
}