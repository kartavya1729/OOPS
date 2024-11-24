// Q2: You are a secret agent working on a mission to build a hidden base. Design a class SecretBase with attributes for the base location and security level. 
//  Implement a default constructor that initializes the location to "Unknown" and security level to 0. 
//  Additionally, include a destructor to print a message when the base is destroyed.
//  Test Case1:
//  Input: N/A
//  Output: A secret base with an unknown location, security level 0, and a message when the base
//  is destroyed.

//  Test Case 2: Creating a Custom Secret Base and Destroying it
//  Input:
//  Custom location: "Mount Everest"
//  Custom security level: 5

//  Expected Output:
//  A SecretBase object is created with the location set to "Mount Everest" and the security level set to 5.
//  A message is displayed when the SecretBase object is destroyed, indicating the destruction of the secret base

#include <iostream>
#include <string>
using namespace std;

class SecretBase 
{
private:
    string location;
    int securityLevel;

public:
    SecretBase() : location("Unknown"), securityLevel(0) 
    {
        cout << "A secret base is created with location: " << location << " and security level: " << securityLevel << endl;
    }

    SecretBase(string customLocation, int customSecurityLevel) : location(customLocation), securityLevel(customSecurityLevel) 
    {
        cout << "A secret base is created with location: " << location  << " and security level: " << securityLevel << endl;
    }

    ~SecretBase() 
    {
        cout << "The secret base at " << location << " is destroyed." << endl;
    }
};

int main() 
{
    {
        SecretBase base1;
    } // base1 goes out of scope here, triggering the destructor

    cout << endl;

    {
        SecretBase base2("Mount Everest", 5);
    } // base2 goes out of scope here, triggering the destructor

    return 0;
}