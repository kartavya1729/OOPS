#include <iostream>
using namespace std;

int main() 
{
   int num;
   cout << "Enter a number: ";
   cin >> num;

   int f1 = 0, f2 = 1, fib;

   cout << "Fibonacci series: ";

   cout << f1 << " " << f2 << " ";

   for (int i = 2; i < num; i++) 
   {
      fib = f1 + f2;

      cout << fib << " ";

      f1 = f2;
      f2 = fib;
   }
   cout << endl;
   return 0;
}