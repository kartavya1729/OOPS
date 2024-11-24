#include <iostream>
using namespace std;
int main() 
{
    int price;
    cin >> price;

    int quantity;
    cin >> quantity;

    int totalCost = price * quantity;

    cout << totalCost << endl;

    return 0;
}