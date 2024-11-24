#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    if (n <= 0) 
    {
        //cout << "Invalid input." << endl;
        return 1;
    }

    int largest;
    cin >> largest;

    for (int i = 1; i < n; ++i) 
    {
        int currentNum;
        cin >> currentNum;

        if (currentNumber > largest) 
        {
            largest = currentNumber;
        }
    }

    cout << largest << endl;

    return 0;
}