// 6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2; 
    double side3;

public:
    Triangle(double s1, double s2, double s3) 
    {
        if (isValidTriangle(s1, s2, s3)) 
        {
            side1 = s1;
            side2 = s2;
            side3 = s3;
        } 
        else {
            cerr << "Invalid triangle sides. Setting all sides to 0." << endl;
            side1 = side2 = side3 = 0;
        }
    }

    bool isEquilateral() const 
    {
        return (side1 == side2 && side2 == side3 && side1 > 0);
    }

    bool isIsosceles() const 
    {
        return (side1 == side2 || side2 == side3 || side1 == side3) && !isEquilateral() && isValid();
    }

    bool isScalene() const 
    {
        return (side1 != side2 && side2 != side3 && side1 != side3) && isValid();
    }

    void displayType() const 
    {
        if (isEquilateral()) 
        {
            cout << "The triangle is Equilateral." << endl;
        } 

        else if (isIsosceles()) 
        {
            cout << "The triangle is Isosceles." << endl;
        } 

        else if (isScalene()) 
        {
            cout << "The triangle is Scalene." << endl;
        } 

        else 
        {
            cout << "The triangle is invalid." << endl;
        }
    }

private:
    bool isValidTriangle(double s1, double s2, double s3) const 
    {
        return (s1 > 0 && s2 > 0 && s3 > 0) && (s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1);
    }

    bool isValid() const 
    {
        return isValidTriangle(side1, side2, side3);
    }
};

int main() 
{
    Triangle t1(3.0, 3.0, 3.0);
    t1.displayType();  // Equilateral

    Triangle t2(4.0, 4.0, 5.0);
    t2.displayType();  // Isosceles

    Triangle t3(6.0, 7.0, 8.0);
    t3.displayType();  // Scalene

    Triangle t4(1.0, 2.0, 3.0); // Invalid
    t4.displayType();

    return 0;
}