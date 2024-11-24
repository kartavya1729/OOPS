#include <iostream>
using namespace std;

int main() 
{
    
    int totalDays;
    cin >> totalDays;

    if (totalDays < 0) 
    {
        cout << "Invalid input" << endl;
        return 1; // Exit with an error code
    }

    int years = totalDays / 365;
    
    int remainingDays = totalDays % 365;
    
    int months = remainingDays / 30;
    
    remainingDays %= 30;

    cout << years  << months  << remainingDays << endl;

    return 0;
}
