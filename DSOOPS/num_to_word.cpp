// Number to Words Converter.

// Problem Statement:
// The program reads an integer from the user, checks if it falls within the range of 1 to 9, 
// and then prints the respective word (like "one" for 1, "two" for 2, etc.). 
// If the input is outside this range it prints "Greater than 9".

#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    switch (n) 
    {
        case 1:
            cout << "one" << endl;
            break;

        case 2:
            cout << "two" << endl;
            break;

        case 3:
            cout << "three" << endl;
            break;

        case 4:
            cout << "four" << endl;
            break;

        case 5:
            cout << "five" << endl;
            break;

        case 6:
            cout << "six" << endl;
            break;

        case 7:
            cout << "seven" << endl;
            break;

        case 8:
            cout << "eight" << endl;
            break;

        case 9:
            cout << "nine" << endl;
            break;

        default:
            cout << "Greater than 9" << endl;
            break;
    }

    return 0;
}