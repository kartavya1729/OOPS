#include <iostream>
using namespace std;

string reverseString(string str) 
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}

int main() 
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    cin.ignore(); // To consume the newline character after reading t

    while (t--) 
    {
        string input;

        cout << "Enter a string: ";
        getline(cin, input);

        string reversed = reverseString(input);
        cout << "Reversed String: " << reversed << endl;
    }

    return 0;
}