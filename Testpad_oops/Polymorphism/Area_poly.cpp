#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateVolume() = 0; // Pure virtual function
};



class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}
    void calculateVolume() override 
    {
        double volume = (4.0 / 3.0) * 3.14 * pow(radius, 3);

        cout << "Volume of sphere is " << fixed << setprecision(3) << volume << endl;
    }
};



class Cylinder : public Shape {
private:
    double radius, height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    void calculateVolume() override 
    {
        double volume = 3.14 * pow(radius, 2) * height;

        cout << "Volume of cylinder is " << fixed << setprecision(3) << volume << endl;
    }
};



class Cone : public Shape {
private:
    double radius, height;

public:
    Cone(double r, double h) : radius(r), height(h) {}
    void calculateVolume() override 
    {
        double volume = (1.0 / 3.0) * 3.14 * pow(radius, 2) * height;

        cout << "Volume of cone is " << fixed << setprecision(3) << volume << endl;
    }
};



class Cube : public Shape {
private:
    double side;

public:
    Cube(double s) : side(s) {}
    void calculateVolume() override 
    {
        double volume = pow(side, 3);

        cout << "Volume of cube is " << fixed << setprecision(3) << volume << endl;
    }
};

int main() 
{
    int choice;
    cin >> choice;

    if (choice == 1) {
        double radius;
        cin >> radius;
        Sphere sphere(radius);
        sphere.calculateVolume();
    } 
    else if (choice == 2) {
        double radius, height;
        cin >> radius >> height;
        Cylinder cylinder(radius, height);
        cylinder.calculateVolume();
    } 
    else if (choice == 3) {
        double radius, height;
        cin >> radius >> height;
        Cone cone(radius, height);
        cone.calculateVolume();
    } 
    else if (choice == 4) {
        double side;
        cin >> side;
        Cube cube(side);
        cube.calculateVolume();
    } 
    else {
        cout << "wrong choice" << endl;
    }

    return 0;
}
