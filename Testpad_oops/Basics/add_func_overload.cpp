#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int num1, num2, num3, num4;

        if (cin.peek() != '\n') 
        {  // Check if there are more numbers for 3 or 4 numbers case
            cin >> num1 >> num2;
            cout << sum(num1, num2) << endl;
        } 

        else if (cin.peek() != '\n') 
        { 
            cin >> num1 >> num2 >> num3;
            cout << sum(num1, num2, num3) << endl;
        }
    }
}