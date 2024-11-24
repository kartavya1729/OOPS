#include<iostream>
using namespace std;

template <typename T>

void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x1, x2;
    cin >> x1 >> x2;

    float y1, y2;
    cin >> y1 >> y2;

    // Input for characters
    char c1, c2;
    cin >> c1 >> c2;

    // Output before swapping
    cout << x1 << " " << x2 << endl;
    cout << y1 << " " << y2 << endl;
    cout << c1 << " " << c2 << endl;

    // Swap the integers
    Swap(x1, x2);
    // Swap the floating point numbers
    Swap(y1, y2);
    // Swap the characters
    Swap(c1, c2);

    // Output after swapping
    cout << x1 << " " << x2 << endl;
    cout << y1 << " " << y2 << endl;
    cout << c1 << " " << c2 << endl;

    return 0;
}