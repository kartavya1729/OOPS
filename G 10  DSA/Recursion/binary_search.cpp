#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e, int key)
{
	//base case
	if(s > e)
	return -1;
	
	//recursive case
	int mid = (s + e) /2;

	if(arr[mid] == key)
	return mid;

	else if(arr[mid] > key)
	{
		return binarySearch(arr,mid+1,e,key);
	}
	else
	{
		return binarySearch(arr,s,mid-1,key);
	}
}
int main()
{
	int arr[]={1,5,3,2,0};
	int  n = sizeof(arr)/sizeof(int);
	
	cout << binarySearch(arr, 0, n - 1, 3);
	
	return 0;
}