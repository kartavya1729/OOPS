#include<iostream>
using namespace std;
int main()
{
    int Principal, Time;
    double Rate, SI;

    cout << "Enter Principal: ";
    cin >> Principal;
    
    cout << "Enter Time: ";
    cin >> Time;

    cout << "Enter Rate: ";
    cin >> Rate;


    SI = (Principal * Rate * Time) /100;
    cout << "Simple Interest: " << SI << endl;

    return 0;
}
