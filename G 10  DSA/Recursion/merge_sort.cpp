#include<iostream>
using namespace std;

void Merge(int *arr, int *b, int *c, int s, int e)
{
	int mid = (s + e) / 2;
	int i = s, j = mid + 1, k = s;
	
	while(i < = mid and j < =e)
	{
		if(b[i] < c[j])
		{
			arr[k] = b[i];
			k++;
			i++;
		}
		else
		{
			arr[k++] = c[j++];
		}
	}
	
	while(i < = mid)
	{
		arr[k++] = b[i++];
	}
	
	while(j < = e)
	{
		arr[k++] = c[j++];
	}
}
void MergeSort(int *arr, int s, int e)
{
	//base case
	if(s >= e)
	return;
	
	//recursive case
	int mid = (s+e)/2;
	
	int b[10000], c[10000];
	
	//1. Divide
	for(int i=s;i<=mid;i++)
	b[i] = arr[i];
	
	for(int i=mid+1;i<=e;i++)
	c[i] = arr[i];
	
	//2.Sort
	
	MergeSort(b, s, mid);
	MergeSort(c,mid+1,e);
	
	//3.Merge
	Merge(arr,b,c,s,e);
	
}
int main()
{
	int arr[] = {5,0,4,3,2,1};
	
	int n = sizeof(arr)/sizeof(int);
	
	MergeSort(arr,0,n-1);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}