// Multiply two number using recursion?

#include<iostream>
using namespace std;

int solve(int a, int b)
{
	
	if(b == 0)
	return 0;
	
	int small_Ans = solve(a, b-1);
	int large_Ans = a + small_Ans;   //'a' ko 'b' times add kr rhe hai 
	
	return large_Ans;
}

int main()
{
	//4*5=20 or 4+4+4+4+4 = 20
   
   int a,b;
   cin >> a;
   cin >> b;
   
   cout << solve(a,b);
   return 0;

}