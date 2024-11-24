#include <iostream>
#include <cmath> // For M_PI
using namespace std;

class Shape {
public:
    // Virtual method to calculate the area of the shape
    virtual double getArea() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};


class Square : public Shape {
private:
    double side;

public:
    // Constructor to initialize the side length
    Square(double s) : side(s) {}

    // Overridden method to calculate the area of the square
    double getArea() const override 
    {
        return side * side;
    }
};


class Circle : public Shape 
{
private:
    double radius;

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Overridden method to calculate the area of the circle
    double getArea() const override 
    {
        return M_PI * radius * radius;
    }
};

int main() 
{
    double side, radius;

    cout << "Enter side length of square: ";
    cin >> side;

    cout << "Enter radius of circle: ";
    cin >> radius;

    // Create an instance of Square and Circle
    Square square(side);
    Circle circle(radius);

    cout << "Area of Square: " << square.getArea() << endl;
    cout << "Area of Circle: " << circle.getArea() << endl;

    return 0;
}