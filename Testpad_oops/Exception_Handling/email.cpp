#include <iostream>
#include <string>
using namespace std;

void isvalidemail(string id) 
{
    try 
    {
        size_t at_pos = id.find('@');

        if (at_pos == string::npos) 
        {
            throw "Invalid";  // No '@' symbol found
        }

        size_t dot_pos = id.find('.');

        if (dot_pos == string::npos) 
        {
            throw "Invalid";  // No '.' symbol found
        }


        if (dot_pos < at_pos) 
        {
            throw "Invalid";  // '.' appears before '@'
        }

        cout << "Valid" << endl;
    }

    catch (const char* msg) 
    {
        cout << msg << endl;
    }
}


int main() 
{
    isvalidemail("example@domain.com");  // Valid
    isvalidemail("example@domain");      // Invalid (no dot)
    isvalidemail("exampledomain.com");   // Invalid (no '@')
    isvalidemail("example@domaincom");   // Invalid (dot before '@')

    return 0;
}