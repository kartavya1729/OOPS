#include <iostream>
using namespace std;

int main() 
{
    cout << "Enter the number: ";

    int n, r, sum = 0, temp;

    cin >> n;

    temp = n;

    while (n > 0) 
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if (temp == sum)
        cout << "Palindrome number." << endl;

    else
        cout << "Not a palindrome number." << endl;

    return 0;
}
