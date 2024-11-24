#include<iostream>
using namespace std;

int Fact(int n)
{
	//base case
	if(n == 1)
	return 1;
	
	//recursive case
	return n * Fact( n - 1);
}
int main()
{
	int n;
	cin >> n;
	
	cout << Fact(n);

return 0;

}