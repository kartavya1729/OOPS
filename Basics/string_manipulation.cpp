#include <iostream>
#include <string>
using namespace std;

class StringManipulator 
{
private:
    string str;

public:
    // Constructor to initialize the string
    StringManipulator(string s) : str(s) {}

    bool operator>(const StringManipulator& other) const 
    {
        return str > other.str;
    }

    bool operator<(const StringManipulator& other) const 
    {
        return str < other.str;
    }

    bool operator==(const StringManipulator& other) const 
    {
        return str == other.str;
    }

    string getString() const 
    {
        return str;
    }
};

int main() 
{
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    StringManipulator str1(s1);
    StringManipulator str2(s2);

    // Compare the strings using overloaded operators and print the results
    if (str1 > str2) 
    {
        cout << str1.getString() << " is lexicographically greater than " << str2.getString() << endl;
    } 

    else if (str1 < str2) 
    {
        cout << str1.getString() << " is lexicographically smaller than " << str2.getString() << endl;
    } 

    else if (str1 == str2) 
    {
        cout << str1.getString() << " is lexicographically equal to " << str2.getString() << endl;
    }

    return 0;
}