#include <iostream>
using namespace std;

void primeFactors(int n) 
{
    while (n % 2 == 0) 
    {
        cout << 2 << endl; // Print 2 as a prime factor

        n /= 2;            // Divide n by 2
    }


    // Now check for odd factors from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) 
    {
        while (n % i == 0) 
        {
            cout << i << endl; // Print the factor i

            n /= i;            // Divide n by i
        }
    }

    if (n > 2) 
    {
        cout << n << endl; // Print the remaining prime factor
    }
}

int main() 
{
    int n;
    cin >> n;

    primeFactors(n);

    return 0;
}