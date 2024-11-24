#include <iostream>
using namespace std;


class Animal {
  public:
    // Virtual function to allow overriding
    virtual void sound() 
    {
        cout << "This is a generic animal sound." << endl;
    }
};


class Dog : public Animal {
  public:
    void sound() override 
    {
        cout << "The dog barks: Woof! Woof!" << endl;
    }
};


class Cat : public Animal {
  public:
    void sound() override {
        cout << "The cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animal; // Pointer to the base class
    Dog dog;
    Cat cat;

    // Point to a Dog object
    animal = &dog;
    animal->sound(); // Calls Dog's version of sound()

    // Point to a Cat object
    animal = &cat;
    animal->sound(); // Calls Cat's version of sound()

    return 0;
}