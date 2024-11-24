#include<iostream>
using namespace std;

int* mergeArrays(int a[], int b[], int asize, int bsize) 
{
    int* result = new int[asize + bsize];  // Create a new array to hold the merged result

    int i = 0, j = 0, k = 0;

    while (i < asize && j < bsize) 
    {
        if (a[i] < b[j]) 
        {
            result[k++] = a[i++];
        } 

        else 
        {
            result[k++] = b[j++];
        }
    }

    // If there are remaining elements in a[]
    while (i < asize) {
        result[k++] = a[i++];
    }

    // If there are remaining elements in b[]
    while (j < bsize) {
        result[k++] = b[j++];
    }

    return result;  // Return the merged array
}

int main() 
{
    int asize, bsize;

    cin >> asize;
    int a[asize];

    for (int i = 0; i < asize; i++) {
        cin >> a[i];
    }


    cin >> bsize;
    int b[bsize];


    for (int i = 0; i < bsize; i++) {
        cin >> b[i];
    }


    int* mergedArray = mergeArrays(a, b, asize, bsize);

    for (int i = 0; i < asize + bsize; i++) 
    {
        cout << mergedArray[i] << endl;
    }

    delete[] mergedArray;

    return 0;
}