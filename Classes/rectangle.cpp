// 2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
// Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length; 
    double width;

public:
    Rectangle(double l, double w) 
    {
        if (l < 0 || w < 0) {
            cerr << "Length and width cannot be negative. Setting to 0." << endl;
            length = width = 0;
        } 
        else {
            length = l;
            width = w;
        }
    }

    void setLength(double l) 
    {
        if (l < 0) 
        {
            cerr << "Length cannot be negative. No change made." << endl;
        } 
        else {
            length = l;
        }
    }

    void setWidth(double w) 
    {
        if (w < 0) 
        {
            cerr << "Width cannot be negative. No change made." << endl;
        } 
        else 
        {
            width = w;
        }
    }

    double getLength() const 
    {
        return length;
    }

    double getWidth() const 
    {
        return width;
    }

    double calculateArea() const 
    {
        return length * width;
    }

    double calculatePerimeter() const 
    {
        return 2 * (length + width);
    }

    void display() const {
        cout << "Rectangle with length " << length << " and width " << width << ":\n";
        cout << "Area: " << calculateArea() << "\n";
        cout << "Perimeter: " << calculatePerimeter() << "\n";
    }
};

int main() 
{
    Rectangle rect1(10.0, 5.0);
    
    rect1.display();

    rect1.setLength(15.0);
    rect1.setWidth(7.5);
    cout << "\nAfter updating dimensions:\n";
    rect1.display();

    rect1.setLength(-4.0);
    rect1.setWidth(-2.0);

    return 0;
}