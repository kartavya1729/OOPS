#include<bits/stdc++.h>
// #include <iostrea>
// #include <string>
// #include <cctype> // For tolower function
using namespace std;

int main() 
{
    string firstName;
    getline(cin, firstName);

    string lastName;
    getline(cin, lastName);

    string role;
    getline(cin, role);

    string company;
    getline(cin, company);

    for(int i = 0; i < firstName.length(); i++)
    {
        firstName[i] = tolower(firstName[i]);
    }
    for(int i = 0; i < lastName.length(); i++)
    {
        lastName[i] = tolower(lastName[i]);
    }

    // Generate email
    cout << "Generated email: " << firstName[0] << lastName << "@" << role << "." << company << ".com" << endl;

    return 0;
}




// #include <iostream>
// #include <string>
// #include <algorithm> // For transform function
// using namespace std;

// int main() 
// {
//     string firstName;
//     getline(cin, firstName);

//     string lastName;
//     getline(cin, lastName);

//     string role;
//     getline(cin, role);

//     string company;
//     getline(cin, company);

//     for(int i=0;i<firstname.length();i++)
//     {
//         firstname[i].toLower();
//     }
//     for(int i=0;i<lastName.length();i++)
//     {
//         lastName[i].toLower();
//     }

//     // Generate email
//     cout << "Generated email: " << firstName[0] << lastName << "@" << role << "." << company << ".com" << endl;

//     return 0;
// }