// code for the sum of numbers between 1 to n....

#include <iostream>
using namespace std;

int main() 
{
   int num;
   cout << "Enter a number: ";
   cin >> num;

   int sum = 0;

   for (int i = 1; i <= num; i++) 
   {
      sum += i; // sum = sum + i;
   }

   cout << "Sum: " << sum << endl;
   
   return 0;
}
