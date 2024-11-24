#include<iostream>
#include<cstring>
using namespace std;

int solve(char *arr, int n)
{
	//base case
	if(n == 0)
	return 0;
	
	int last_digit = arr[n-1] - '0';
	int small_Ans = solve(arr, n-1);
	
	int large_Ans = small_Ans*10 + last_digit;
	return large_Ans;
}
int main()
{
	char arr[] = "1235";
	
	cout<< solve(arr, strlen(arr));
}