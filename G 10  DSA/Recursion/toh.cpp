//Question: Tower of hanoi using recursion?
//Please note that :- choti disk ke upar badi disk nh aaegi and, ek bari mei ek hi disk utha skte hai

#include<iostream>
using namespace std;

void toh(int n, char src, char helper, char des)
{
	//base case
	if(n == 0)
	return;
	
	//recursive case
	toh(n - 1, src , des , helper);
	cout<<"Taking Disk "<<n<<" from "<<src<<" to "<<des<<" "<<endl;

	toh(n - 1, helper , src , des );
}
int main()
{
	int n;
	cin>>n;
	
	toh(n,'A','B','C');
}