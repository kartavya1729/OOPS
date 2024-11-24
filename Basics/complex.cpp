#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor to initialize complex number
    Complex(int r, int i) : real(r), imag(i) {}

    // Pre-increment operator overload
    Complex& operator++() {
        // Increment both real and imaginary parts
        ++real;
        ++imag;
        return *this;
    }

    Complex operator++(int) 
    {
        // Create a temporary copy of the current complex number
        Complex temp = *this;
        // Increment both real and imaginary parts
        ++real;
        ++imag;
        return temp; // Return the original object before increment
    }

    Complex& operator--() 
    {
        // Decrement both real and imaginary parts
        --real;
        --imag;
        return *this;
    }

    // Post-decrement operator overload
    Complex operator--(int) {
        // Create a temporary copy of the current complex number
        Complex temp = *this;
        // Decrement both real and imaginary parts
        --real;
        --imag;
        return temp; // Return the original object before decrement
    }

    void display() const 
    {
        cout << real << " + i " << imag << endl;
    }
};

int main() {
    // Initialize complex number with real = 3, imag = 4
    Complex c(3, 4);

    Complex cPostInc = c++; // Post-increment will return the original value of c
    cout << "After post increment: ";
    cPostInc.display();

    --c; // Pre-decrement will decrement the value of c
    cout << "After pre decrement: ";
    c.display();

    return 0;
}