#include <iostream>
using namespace std;

int main() 
{
   int x = 7;
   int y = 3;

   int z = (x != y) ? (x -= y) : (y += x);

    cout << z << endl;
   cout << "The result is: " << z << endl;

   return 0;
}
