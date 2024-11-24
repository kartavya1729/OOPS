#include <iostream>
using namespace std;

class Animal                // Base class
{
  public:
    void eat() 
    {
        cout << "This animal eats food." << endl;
    }
};


class Dog : public Animal           // Derived class
{
  public:
    void bark() 
    {
        cout << "The dog barks." << endl;
    }
};


int main() 
{
    Dog d;    // Create an object of the DC

    d.eat();    // Access BC method

    d.bark();    // Access DC method

    return 0;
}