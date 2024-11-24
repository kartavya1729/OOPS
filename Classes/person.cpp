// 3. Write a C++ program to create a class called Person that has private member variables for name, age and country. 
// Implement member functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;     
    string country;

public:
    // Default constructor
    Person() : name("Unknown"), age(0), country("Unknown") {}

    // Parameterized constructor
    Person(const string& n, int a, const string& c) {
        setName(n);
        setAge(a);
        setCountry(c);
    }

    void setName(const string& n) 
    {
        name = n;
    }

    string getName() const 
    {
        return name;
    }

    void setAge(int a) 
    {
        if (a < 0) 
        {
            cerr << "Age cannot be negative. Setting age to 0." << endl;
            age = 0;
        } 
        else {
            age = a;
        }
    }

    int getAge() const 
    {
        return age;
    }

    void setCountry(const string& c) 
    {
        country = c;
    }

    string getCountry() const 
    {
        return country;
    }

    void display() const 
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Country: " << country << "\n";
    }
};

int main() 
{
    Person p1;
    p1.display();

    cout << "\nSetting values for person1...\n";
    p1.setName("Alice");
    p1.setAge(25);
    p1.setCountry("USA");
    p1.display();


    Person p2("Bob", 30, "Canada");
    cout << "\nDetails of person2:\n";
    p2.display();

    cout << "\nTesting invalid age input...\n";
    p2.setAge(-5); // Invalid age
    p2.display();

    return 0;
}
