// #include <iostream>
// using namespace std;

#include <iostream>
using namespace std;

int fact(int n)
{
   if (n == 0)
   {
      return 1;
   }
   else
   {
      return n * fact(n - 1);
   }
}

int main()
{
   int result = fact(5); 
   cout << "Factorial of 5 is: " << result << endl; // Print the result
   return 0;
}


// int main() 
// {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;

//    int fact = 1;

//    for (int i = 2; i <= num; i++) 
//    {
//       fact *= i;
//    }

//    cout << "Factorial: " << fact << endl;

//    return 0;
// }
