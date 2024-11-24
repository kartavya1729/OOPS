// 1. Write a C++ program to implement a class called Circle that 
//has private member variables for radius. 
//Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

class Circle {
private:
    double radius; // Private member variable for radius

public:
    Circle(double r) 
    {
        if (r < 0) 
        {
            cerr << "Radius cannot be negative. Setting radius to 0." << std::endl;
            radius = 0;
        } 
        else 
        {
            radius = r;
        }
    }

    void setRadius(double r) 
    {
        if (r < 0) 
        {
            std::cerr << "Radius cannot be negative. No change made." << std::endl;
        } 
        else 
        {
            radius = r;
        }
    }

    double getRadius() const 
    {
        return radius;
    }

    double calculateArea() const {
        return M_PI * radius * radius;
    }

    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }

    void display() const 
    {
        cout << "Circle with radius " << radius << ":\n";
        cout << "Area: " << calculateArea() << "\n";
        cout << "Circumference: " << calculateCircumference() << "\n";
    }
};

int main() 
{
    Circle c1(5.0); // Initialize with radius 5.0
    c1.display();

    c1.setRadius(10.0);
    cout << "\nAfter updating the radius:\n";
    c1.display();

    c1.setRadius(-3.0);

    return 0;
}