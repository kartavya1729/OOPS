#include <iostream>
using namespace std;

int kthLargest(int arr[], int size, int k) 
{
    // Sort the array in descending order using Bubble Sort
    for (int i = 0; i < size; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (arr[j] < arr[j + 1]) 
            {
                // Swap in descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[k];
}

int main() 
{
    int size, k;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    cout << "Enter the value of K: ";
    cin >> k;

    int result = kthLargest(arr, size, k);

    cout << "The " << k << "th largest element is: " << result << endl;

    return 0;
}