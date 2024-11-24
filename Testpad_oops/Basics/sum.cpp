// Given a set of n numbers , write a program to add these numbers and return the resultant sum.

// Input Format:
// First line of input of each test case will contain a number N = number of elements in the set. 
// Next N lines will contain number n where n>=0.

// Output Format:
// For each input case, sum and print the all the numbers. 
// Sample Input

// 5
// 1
// 2
// 3
// 4
// 5
// Sample Output : 15

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
  int n , p;
  int sum = 0;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> p;
    sum + = p;
  }
  cout << sum;
  return 0;
}