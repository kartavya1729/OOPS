// 10. Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. 
// Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

#include <iostream>
#include <cmath> // For M_PI (π)
using namespace std;

class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() const = 0;

    // Virtual function to calculate perimeter
    virtual double calculatePerimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};


// Derived class Circle
class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }
};


class Rectangle : public Shape 
{
private:
    double length, width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};


class Triangle : public Shape 
{
private:
    double a, b, c;  // Sides of the triangle

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    // Override calculateArea for Triangle using Heron's formula
    double calculateArea() const override {
        double s = (a + b + c) / 2;  // Semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }

    double calculatePerimeter() const override {
        return a + b + c;  // Sum of the sides
    }
};

void displayShapeDetails(Shape* shape) 
{
    cout << "Area: " << shape->calculateArea() << endl;
    cout << "Perimeter: " << shape->calculatePerimeter() << endl;
}

int main() 
{
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 4, 5);

    // Displaying details of each shape
    cout << "Circle:" << endl;
    displayShapeDetails(&c);

    cout << "\nRectangle:" << endl;
    displayShapeDetails(&r);

    cout << "\nTriangle:" << endl;
    displayShapeDetails(&t);

    return 0;
}