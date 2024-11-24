#include<iostream>
using namespace std;

template <class T>

class Calculate 
{
private:
    T num1, num2;

public:
    // Constructor to initialize the two numbers
    Calculate(T a, T b) : num1(a), num2(b) {}

    T add() {
        return num1 + num2;
    }

    T sub() {
        return num1 - num2;
    }

    T mul() {
        return num1 * num2;
    }

    T div() {
        if (num2 != 0) 
        {
            return num1 / num2;
        } 
        else 
        {
            cout << "Error: Division by zero" << endl;
            return 0; // Return 0 in case of division by zero
        }
    }
};


int main() 
{
    Calculate<int> calcInt(10, 5);
    cout << "Addition: " << calcInt.add() << endl;
    cout << "Subtraction: " << calcInt.sub() << endl;
    cout << "Multiplication: " << calcInt.mul() << endl;
    cout << "Division: " << calcInt.div() << endl;


    Calculate<float> calcFloat(10.5, 5.2);
    cout << "Addition: " << calcFloat.add() << endl;
    cout << "Subtraction: " << calcFloat.sub() << endl;
    cout << "Multiplication: " << calcFloat.mul() << endl;
    cout << "Division: " << calcFloat.div() << endl;

    return 0;
}