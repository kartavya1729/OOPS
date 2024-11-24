#include <iostream>
#include <cmath>
using namespace std;

bool verifyPrime(int n) 
{
    if (n <= 1) return false;          // Numbers 0 and 1 are not prime

    if (n <= 3) return true;           // Numbers 2 and 3 are prime

    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) 
    {
        int n;
        cin >> n;

        if (verifyPrime(n)) 
        {
            cout << "PRIME" << endl;
        } 
        else 
        {
            cout << "NOT PRIME" << endl;
        }
    }
    return 0;
}