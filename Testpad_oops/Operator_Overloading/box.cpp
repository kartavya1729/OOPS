#include <iostream>
using namespace std;

class Box2 {
private:
    int length, breadth, height;  // Dimensions of the box

public:
    // Default constructor initializes dimensions to 0
    Box2() : length(0), breadth(0), height(0) {}

    // Parameterized constructor
    Box2(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Copy constructor
    Box2(Box2& b1) : length(b1.length), breadth(b1.breadth), height(b1.height) {}


    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int getHeight() { return height; }


    long long CalculateVolume() 
    {
        return (long long)length * breadth * height;
    }

    bool operator<(Box2& b) 
    {
        return (length < b.length) && (breadth < b.breadth) && (height < b.height);
    }

    // Overloading operator << for printing Box2 object
    friend ostream& operator<<(ostream& out, Box2& B);
};


ostream& operator<<(ostream& out, Box2& B) 
{
    out << B.length << " " << B.breadth << " " << B.height;
    return out;
}

int main() 
{
    // Create a Box2 object using parameterized constructor
    Box2 box1(5, 10, 15);
    Box2 box2(3, 8, 10);

    // Create a Box2 object using the copy constructor
    Box2 box3 = box1;


    cout << "Box1 dimensions: " << box1 << endl;
    cout << "Box2 dimensions: " << box2 << endl;
    cout << "Box3 dimensions: " << box3 << endl;


    if (box1 < box2) 
    {
        cout << "Box1 is smaller than Box2." << endl;
    } 
    
    else 
    {
        cout << "Box1 is not smaller than Box2." << endl;
    }

    cout << "Volume of Box1: " << box1.CalculateVolume() << endl;

    return 0;
}