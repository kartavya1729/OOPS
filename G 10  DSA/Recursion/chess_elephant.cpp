#include<iostream>
using namespace std;

int ChessElephant(int n, int m)
{
	//base case
	if(n == 0 and m == 0)
	return 1;
	
	if(n < 0 or m < 0)
	return 0;
	
	int ans = 0;
	for(int k = 0; k < n ; k++)
	{
		ans += ChessElephant(k,m);
	}
	
	for(int k = 0; k < m; k++)
	{
		ans += ChessElephant(n,k);
	}
	
	return ans;
}

int main()
{
	int n,m;
	cin >> n >> m;
	
	cout << ChessElephant(n,m);
	
	return 0;
}