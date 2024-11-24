#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int breadth;
    int height;

public:
    // Default Constructor
    Box() : length(0), breadth(0), height(0) {}

    // Parameterized Constructor
    Box(int length, int breadth, int height) : length(length), breadth(breadth), height(height) {}

    // Copy Constructor
    Box(const Box& b1) : length(b1.length), breadth(b1.breadth), height(b1.height) {}

    int getLength() const {
        return length;
    }

    int getBreadth() const {
        return breadth;
    }

    int getHeight() const {
        return height;
    }

    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }
};

int main() 
{
    Box b1;
    cout << "Default Box Volume: " << b1.CalculateVolume() << endl;

    Box b2(3, 4, 5);
    cout << "Box with dimensions 3x4x5 Volume: " << b2.CalculateVolume() << endl;

    Box b3(b2);
    cout << "Copy of Box b2 Volume: " << b3.CalculateVolume() << endl;

    cout << "Dimensions of Box b2 - Length: " << b2.getLength()
         << ", Breadth: " << b2.getBreadth()
         << ", Height: " << b2.getHeight() << endl;

    return 0;
}