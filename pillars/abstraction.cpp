#include <iostream>
using namespace std;

// Abstract class because  it contains a PVF
class Shape {
  public:
    virtual void draw() = 0;     // Pure virtual function

    void display() 
    {
        cout << "This is a shape." << endl;
    }
};


class Circle : public Shape 
{
  public:
    void draw() override 
    {
        cout << "Drawing a Circle." << endl;
    }
};


class Rectangle : public Shape 
{
  public:
    void draw() override 
    {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Create objects of DC
    Circle cir;
    Rectangle rect;

    // Access methods
    cir.display();  // Accessing BC method
    cir.draw();     // Accessing overridden method

    rect.display();
    rect.draw();

    return 0;
}
