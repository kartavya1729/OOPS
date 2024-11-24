#include <iostream>
using namespace std;

int main() 
{
   int year;

   cout << "Enter a year: ";

   cin >> year;

   if (year % 400 == 0) 
   {
      cout << "Leap year" << endl;
   } 

   else if (year % 100 == 0) 
   {
      cout << "Not a leap year" << endl;
   } 

   else if (year % 4 == 0) 
   {
      cout << "Leap year" << endl;
   } 

   else 
   {
      cout << "Not a leap year" << endl;
   }
   
   return 0;
}
