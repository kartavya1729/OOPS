#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n, int i)
{
	//base case
	if(i== n-1) //agar 'n-1' elements unki shi jagah pe phunch gye means poora array sort hogya.
	return;
	
	for(int j = 0; j < n-1; j++)
	{
		if(arr[j] > arr[j+1])
		swap(arr[j],arr[j+1]);
	}
	
	//recursive case
	bubbleSort(arr, n, i+1);
}

int main()
{
	int arr[] = {5, 4, 3, 1, 2};

	int n = sizeof(arr)/sizeof(int);
	
	bubbleSort(arr, n, 0);
	
	for(int i = 0; i < n; i++)
	cout<< arr[i] <<" ";
	

return 0;

}