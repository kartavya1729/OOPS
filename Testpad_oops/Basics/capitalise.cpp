#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

string capitalizeFirst(string str) 
{
    bool capitalize = true;

    for (size_t i = 0; i < str.length(); i++) 
    {
        if (isspace(str[i])) 
        {
            capitalize = true; // Next character should be capitalized
        } 

        else if (capitalize) 
        {
            str[i] = toupper(str[i]); // Capitalize the current character
            capitalize = false;      // Reset the flag
        }
    }
    return str;
}

int main() 
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string res = capitalizeFirst(input);

    cout << "Capitalized String: " << res << endl;

    return 0;
}