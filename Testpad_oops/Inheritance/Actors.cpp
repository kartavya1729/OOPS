// Design a class Person and two sub classes Actor and Actress. Every Actor will have a name, color, number_of_eyes & debut_year associated with him/her.
// Supply each with a constructor that sets the Person data ﬁelds as described with given values, and a method named toString() that returns a string that contains a complete description of the Actor.
// The constructor should be in the following format

// Actor(name,color,number_of_eyes,debut_year)
// And the same for class Actress.

// Sample input
// Amitabh
// BROWN
// 2
// 1965
// Hema
// White
// 2
// 1975

// Sample output
// The person Amitabh is an Actor. He is BROWN in color, has 2 eyes and debut in 1965
// The person Hema is an Actress. She is White in color, has 2 eyes and debut in 1975

#include <iostream>
#include <string>
using namespace std;

class Person 
{
protected:
    string name;
    string color;
    int number_of_eyes;
    int debut_year;

public:
    Person(string name, string color, int number_of_eyes, int debut_year) : name(name), color(color), number_of_eyes(number_of_eyes), debut_year(debut_year) {}

    // Virtual toString() to allow overriding in derived classes
    virtual string toString() const = 0;
};


class Actor : public Person 
{
public:
    Actor(string name, string color, int number_of_eyes, int debut_year) : Person(name, color, number_of_eyes, debut_year) {}

    string toString() const override 
    {
        return "The person " + name + " is an Actor. He is " + color + " in color, has " + to_string(number_of_eyes) + " eyes and debuted in " + to_string(debut_year);
    }
};


class Actress : public Person 
{
public:
    Actress(string name, string color, int number_of_eyes, int debut_year) : Person(name, color, number_of_eyes, debut_year) {}

    string toString() const override 
    {
        return "The person " + name + " is an Actress. She is " + color + " in color, has " + to_string(number_of_eyes) + " eyes and debuted in " + to_string(debut_year);
    }
};


int main() 
{
    Actor amitabh("Amitabh", "BROWN", 2, 1965);
    Actress hema("Hema", "White", 2, 1975);

    cout << amitabh.toString() << endl;
    cout << hema.toString() << endl;

    return 0;
}