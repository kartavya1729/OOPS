#include <iostream>
using namespace std;

int main() 
{
    int i, fact = 1, num;

    cout << "Enter a num: ";
    cin >> num;

    for(i = 1; i <= num; i++) 
    {
        fact = fact * i;
    }

    cout << "Factorial: " << fact << endl;

    return 0;
}
