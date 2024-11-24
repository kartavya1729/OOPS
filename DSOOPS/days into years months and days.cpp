/* Conversion of days into years months and days

Johnson was working as a Captain of the Giant Ship. He was traveling from India to various countries around the world. 
The days of the travel may differ from one country to another.
To plan the upcoming travel the Johnson captain of the ship would like to know the travel days in the year month day format.

☑ Can you help Johnson?

Constraints: <1<=ndays <= 15000

Note: Please consider number of days in the month is 30 and no of days in a year is 365,

Input Format: The only line of input has a single positive integer representing the number of days the ship was traveling.

Output Format: Print the result in the prescribed format.

Sample Test Cases: 8721

Expected Output: 23-Y(8) 10 M(s) 26 D(s)*/

#include <iostream>
using namespace std;

int main() 
{
    int ndays;
    cin >> ndays;
    
    int years = ndays / 365;
    int months = (ndays % 365) / 30;
    int days = (ndays % 365) % 30;
    
    cout << ndays << endl;
    cout << years << "-Y(" << ndays / 365 << ") " << months << " M(s) " << days << " D(s)" << endl;
    
    return 0;
}
