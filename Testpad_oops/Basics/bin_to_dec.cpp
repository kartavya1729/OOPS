#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(const string& binary) 
{
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) 
    {
        // Convert the current character to an integer (either 0 or 1)
        int bit = binary[i] - '0';
        // Add the value of the current bit to the decimal result
        decimal += bit * pow(2, length - 1 - i);
    }
    return decimal;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        string binary;
        cin >> binary;  // Input binary string
        cout << binaryToDecimal(binary) << endl;  // Output the decimal equivalent
    }

    return 0;
}
