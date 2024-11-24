#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() 
{
    int n;
    cout << "size of array : " << endl;
    cin >> n;


    int arr[n];
    cout << "Input the array elem : " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cout << "Enter num of queries : " << endl;
    cin >> q;

    for (int i = 0; i < q; i++) 
    {
        int index;
        cin >> index;

        if (index >= 0 && index < n) 
        {
            cout << arr[index] << endl; // valid index
        } 

        else 
        {
            cout << "Out of Bounds" << endl; // invalid index
        }
    }

    return 0;
}