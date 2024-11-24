#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize the Circle with a given radius
    Circle(double r) {
        if (r <= 0) {
            throw invalid_argument("Radius must be a positive number.");
        }
        radius = r;
    }

    // Returns the area of the circle (up to 2 decimal places)
    double area() const {
        return round(M_PI * radius * radius * 100) / 100.0;
    }

    // Returns the circumference of the circle (up to 2 decimal places)
    double circumference() const {
        return round(2 * M_PI * radius * 100) / 100.0;
    }

    // Returns the radius (up to 1 decimal place)
    double getRadius() const {
        return round(radius * 10) / 10.0;
    }

    // Returns a string representation of the circle
    string toString() const {
        return "Circle{radius=" + to_string(getRadius()) + "}";
    }
};

int main() {
    try {
        // Example usage
        Circle c1(2.5);

        cout << "Circle Details:" << endl;
        cout << c1.toString() << endl; // Output: Circle{radius=2.5}
        cout << "Area: " << fixed << setprecision(2) << c1.area() << endl; // Output: Area: 19.63
        cout << "Circumference: " << fixed << setprecision(2) << c1.circumference() << endl; // Output: Circumference: 15.71
        cout << "Radius: " << fixed << setprecision(1) << c1.getRadius() << endl; // Output: Radius: 2.5
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
