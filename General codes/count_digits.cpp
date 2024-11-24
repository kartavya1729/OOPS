//  Given an integer N, write a program to count the number of digits in N.

#include<bits/stdc++.h>
using namespace std;

int count_digits( int n )
{
   int x = n; 
   int count =0;

   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }

   return count;
}


int main()
{
   int n;
   cin >> n;

   cout<< count_digits(n);
   return 0;
}
