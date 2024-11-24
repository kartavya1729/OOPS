#include<iostream>
using namespace std;

int power(int x, int n)
{
	//base case
	if(n==1)
	return x;
	
	//recursive case
	return x * power( x , n-1 );
}
int main()
{
  int x,n;
  cin >> x;
  cin >> n;
  
  cout << power(x,n);
  return 0;

}