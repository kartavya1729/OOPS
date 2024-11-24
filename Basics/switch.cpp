#include <iostream>
using namespace std;

int main() 
{
   int x;
   
   cout << "Enter a num: ";

   cin >> x;

   switch (x) 
   {
      case 1:
         cout << "One" << endl;
         break;

      case 2:
         cout << "Two" << endl;
         break;

      case 3:
         cout << "Three" << endl;
         break;

      default:
         cout << "Other" << endl;
   }
   return 0;
}