// Reverse an Array: input Arr [] = {5,4,3,2,1}, Output : Arr[] = {1, 2, 3, 4, 5}

#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void PrintArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Array of size 'n'

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    ReverseArray(arr, n); 

    cout << "Reversed array: ";

    PrintArray(arr, n);  

    return 0;
}

// #include <iostream>
// using namespace std;

// void ReverseArray(int arr[], int n) {
//     int start = 0;
//     int end = n - 1;

//     while (start < end) 
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         // Move the pointers towards each other
//         start++;
//         end--;
//     }
// }

// void PrintArray(int arr[], int n) 
// {
//     for (int i = 0; i < n; i++) 
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() 
// {
//     int arr[] = {1, 2, 3, 4, 5};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     ReverseArray(arr, n);     // Reverse the array

//     PrintArray(arr, n);    // Print the reversed array

//     return 0;
// }
