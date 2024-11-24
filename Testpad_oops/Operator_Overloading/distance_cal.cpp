#include <iostream>
using namespace std;

class Distance {
private:
    double feet, inch;

public:
    Distance() : feet(0), inch(0) {}

    void readDistance() 
    {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inch;

        // Convert inches to feet if inches >= 12
        if (inch >= 12) {
            feet += inch / 12;
            inch = (int)inch % 12; // Keep only the remainder of inches less than 12
        }
    }

    void display() const {
        cout << feet << "'" << inch << "\"" << endl;
    }


    Distance operator+(const Distance& other) 
    {
        Distance temp;
        temp.feet = this->feet + other.feet;
        temp.inch = this->inch + other.inch;

        // Convert inches to feet if inches >= 12
        if (temp.inch >= 12) {
            temp.feet += temp.inch / 12;
            temp.inch = (int)temp.inch % 12;
        }
        return temp;
    }


    Distance operator-(const Distance& other) 
    {
        Distance temp;
        temp.feet = this->feet - other.feet;
        temp.inch = this->inch - other.inch;

        // If inches are negative, borrow from feet
        if (temp.inch < 0) {
            temp.inch += 12;
            temp.feet -= 1;
        }
        
        // If feet are negative, assume we do not subtract more than we have
        if (temp.feet < 0) {
            temp.feet = 0;
            temp.inch = 0;
        }

        return temp;
    }
};

int main() 
{
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    d1.readDistance();
    
    cout << "Enter second distance:" << endl;
    d2.readDistance();

    cout << "First distance: ";
    d1.display();

    cout << "Second distance: ";
    d2.display();


    d3 = d1 + d2;
    cout << "Sum of distances: ";
    d3.display();


    d3 = d1 - d2;
    cout << "Difference of distances: ";
    d3.display();

    return 0;
}