#include <iostream>
using namespace std;

int gcd(int i, int j) 
{
    while (j != 0) 
    {
        int temp = j;
        j = i % j;
        i = temp;
    }
    return i;
}

int main() 
{
    int i, j;
    cout << "Enter your numbers : " << endl;
    cin >> i >> j;  // Read two integers

    cout << gcd(i, j) << endl;  // Output the GCD
    return 0;
}