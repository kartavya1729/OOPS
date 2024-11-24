// Problem Statement: The C++ program is designed to determine and output the binary palindrome number at the Ath position, 
// where A is a positive integer entered by the user. 
// It achieves this by using bitwise operations to check it a number's binary representation is a palindrome.

#include <iostream>
using namespace std;

// Function to check if a number is palindrome in binary representation
bool isBinaryPalindrome(int num) 
{
    int reversedNum = 0;
    int originalNum = num;
    
    // Reverse the binary representation of the number
    while (num > 0) 
    {
        reversedNum <<= 1; // Left shift by 1
        reversedNum |= num & 1; // Set the least significant bit
        num >>= 1; // Right shift by 1
    }
    
    return originalNum == reversedNum; // Check if original number and reversed number are equal
}

int main() 
{
    int A;
    cout << "Enter the position (A): ";
    cin >> A;

    int count = 0;
    int num = 0;

    while (count < A) 
    {
        ++num;
        if (isBinaryPalindrome(num)) 
        {
            ++count;
        }
    }

    cout << "The " << A << "th binary palindrome number is: " << num << endl;

    return 0;
}
