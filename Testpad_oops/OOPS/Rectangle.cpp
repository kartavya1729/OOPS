#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
    int x, y;         // Top-left corner coordinates
    int width, height; // Width and height of the rectangle

public:
    // Constructor to initialize the rectangle
    Rectangle(int x, int y, int width, int height) 
    {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
    }

    int getHeight() {
        return height;
    }

    int getWidth() {
        return width;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    string toString() 
    {
        return "Rectangle[x=" + to_string(x) + ",y=" + to_string(y) + ",width=" + to_string(width) + ",height=" + to_string(height) + "]";
    }
};

int main() 
{
    Rectangle rect(1, 2, 3, 4);

    cout << rect.toString() << endl;  // Prints: Rectangle[x=1,y=2,width=3,height=4]

    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;

    cout << "X: " << rect.getX() << endl;
    cout << "Y: " << rect.getY() << endl;

    return 0;
}
