#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to my calculator" << endl;

    cout << "Enter two numbers:" << endl;

    float n1, n2;

    cout << "Enter the number 1: ";
    cin >> n1;

    cout << "Enter the number 2: ";
    cin >> n2;

    float sum, dif, mul, div;

    sum = n1 + n2;
    mul = n1 * n2;
    dif = n1 - n2;
    div = n1 / n2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << mul << endl;
    cout << "Difference: " << dif << endl;
    cout << "Division: " << div << endl;

    return 0;
}
