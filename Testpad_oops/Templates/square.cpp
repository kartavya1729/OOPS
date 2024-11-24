#include<iostream>
using namespace std;

template <typename T>

T square(T num) {
    return num * num;  // Return the square of the number
}

int main() 
{
    int intNum = 5;
    cout << "Square of " << intNum << " is: " << square(intNum) << endl;

    float floatNum = 4.5;
    cout << "Square of " << floatNum << " is: " << square(floatNum) << endl;

    double doubleNum = 7.2;
    cout << "Square of " << doubleNum << " is: " << square(doubleNum) << endl;

    return 0;
}
