#include <iostream>
using namespace std;

// Function to calculate nth Fibonacci number recursively
int fib_rec(int n) 
{
    if (n <= 1)
        return n; // Base cases: F(0) = 0, F(1) = 1
    
    return fib_rec(n - 1) + fib_rec(n - 2);
}

int main() 
{
    int n;
    cout << "Enter the position (n) for Fibonacci: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fib_rec(n) << endl;

    return 0;
}