#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() 
{
    string username, password;
    
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;
    
    try {
        if (password.length() < 6) 
        {
            throw 's';
        }


        bool has_digit = false;

        for (char c : password) {
            if (isdigit(c)) 
            {
                has_digit = true;
                break;
            }
        }
        
        if (!has_digit) 
        {
            throw 'd';
        }

        cout << "Correct" << endl;
    }

    catch (char e) 
    {
        if (e == 's') 
        {
            cout << "Too short!" << endl;
        }

        else if (e == 'd') 
        {
            cout << "No digit!" << endl;
        }
    }

    return 0;
}