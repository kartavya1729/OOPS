#include <iostream>
using namespace std;

void display(const string& str) {
    cout << str << endl;
}

void display(const string& str1, const string& str2) {
    cout << str1 << "-" << str2 << endl;
}

int main() {
    int T;  // Number of test cases
    cin >> T;
    
    while (T--) 
    {
        string str1, str2;

        if (cin.peek() == '\n') 
        {  // Check if there is only one string
            cin >> str1;
            display(str1);  // Display the single string
        } 

        else 
        {  
            cin >> str1 >> str2;
            display(str1, str2);  // Display two strings with a hyphen
        }
    }

    return 0;
}