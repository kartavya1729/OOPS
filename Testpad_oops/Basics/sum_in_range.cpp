// int sumOfRange(int min, int max) {
//   int sum=0;
//   for(int i = min; i <= max; i++) {
//     sum += i;
//   }
//   return sum;
// }

#include <iostream>
using namespace std;

int sumOfRange(int min, int max) 
{
    if (min > max) 
        return 0;

    return (max - min + 1) * (min + max) / 2; // Using the sum of arithmetic series formula
}

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int min, max;
        cin >> min >> max;
        cout << sumOfRange(min, max) << endl;
    }
    
    return 0;
}