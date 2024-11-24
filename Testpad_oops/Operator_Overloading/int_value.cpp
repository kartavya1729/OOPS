#include<iostream>
#include<climits>
using namespace std;

class IntValue {
private:
    int value;  // stores the integer value

public:
    // Default constructor to initialize value to 0
    void setValue() {
        value = 0;
    }

    // Overloaded constructor to initialize value with a given integer
    void setValue(int a) {
        value = a;
    }

    void display() const {
        cout << value << endl;
    }



    IntValue operator+(const IntValue& obj) 
    {
        IntValue result;
        long double temp = (long double)value + obj.value;  // Use long double to avoid overflow
        if (temp > INT_MAX || temp < INT_MIN) 
        {
            cout << "Out of Range" << endl;
            exit(1);  // Terminate the program if overflow occurs
        }
        result.setValue(static_cast<int>(temp));  // Assign result after casting back to int
        return result;
    }



    IntValue operator-(const IntValue& obj) 
    {
        IntValue result;
        long double temp = (long double)value - obj.value;  // Use long double to avoid overflow
        if (temp > INT_MAX || temp < INT_MIN) 
        {
            cout << "Out of Range" << endl;
            exit(1);  // Terminate the program if overflow occurs
        }
        result.setValue(static_cast<int>(temp));  // Assign result after casting back to int
        return result;
    }



    IntValue operator*(const IntValue& obj) 
    {
        IntValue result;
        long double temp = (long double)value * obj.value;  // Use long double to avoid overflow

        if (temp > INT_MAX || temp < INT_MIN) 
        {
            cout << "Out of Range" << endl;
            exit(1);  // Terminate the program if overflow occurs
        }
        result.setValue(static_cast<int>(temp));  // Assign result after casting back to int
        return result;
    }
};

int main() {
    IntValue obj1, obj2, result;

    obj1.setValue(1000);
    obj2.setValue(2000);

    cout << "obj1: ";
    obj1.display();

    cout << "obj2: ";
    obj2.display();



    result = obj1 + obj2;
    cout << "obj1 + obj2: ";
    result.display();



    result = obj1 - obj2;
    cout << "obj1 - obj2: ";
    result.display();



    result = obj1 * obj2;
    cout << "obj1 * obj2: ";
    result.display();

    return 0;
}