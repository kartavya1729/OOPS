#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, sum;
    float p;

    cout << "Marks for Hindi: ";
    cin >> a;

    cout << "Marks for English: ";
    cin >> b;

    cout << "Marks for Physics: ";
    cin >> c;

    cout << "Marks for Computer: ";
    cin >> d;

    cout << "Marks for Chemistry: ";
    cin >> e;

    cout << "Marks for Maths: ";
    cin >> f;

    cout << "Marks for Physical Education: ";
    cin >> g;

    sum = a + b + c + d + e + f + g;
    cout << "Total Marks: " << sum << endl;

    p = (sum / 700.0) * 100;  // Use 700.0 to ensure floating point division
    cout << "Percentage: " << p << endl;

    return 0;
}
