#include<iostream>
using namespace std;

class Complex 
{
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(int r, int i) : real(r), imag(i) {}

    void display() const 
    {
        cout << real << "+" << imag << "i" << endl;
    }


    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }


    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    int getReal() const {
        return real;
    }

    int getImag() const {
        return imag;
    }
};

int main() 
{
    Complex c1(12, 4), c2(5, 6);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    Complex diff = c1 - c2;
    cout << "Difference: ";
    diff.display();

    return 0;
}