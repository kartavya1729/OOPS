// Given a number n, compute n factorial (written as n!) where n >=0.
// A factorial of a number n is the product of all natural numbers from 1 to n.
// For Example , factorial of 4 (4!) = 1*2*3*4 = 24
// Input Format:
// Each test case will contains an integer n where n >=1. Constraints   0 <= n <= 15
// Sample Input : 4
// Sample Output: 24

#include <iostream>
using namespace std;

int fact(int n, int res = 1) 
{
    if (n == 0 || n == 1) 
    {
        return res; 
    } 

    else 
    {
        return fact(n - 1, n * res);
    }
}

int main() 
{
    int num;
    cout << "Enter your number in order to get factorial : " << endl;
    cin >> num;
    
    int result = fact(num); // Store the result of factorial
    cout << "Factorial of " << num << " = " << result << endl; // Display result
    return 0;
}
