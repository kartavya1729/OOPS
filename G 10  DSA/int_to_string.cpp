#include<iostream>
using namespace std;

string str[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void intToString(int n)
{
	//base case
	if(n == 0)
	return;
	
	int last_digit = n % 10;
	
	intToString(n / 10);
	
	cout << str[last_digit] <<" ";
}

int main()
{
	int n;
	cin >> n;
	
	intToString(n);
	
}