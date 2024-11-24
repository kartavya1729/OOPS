#include <iostream>
#include <string>
using namespace std;

template <typename T>

T minElement(T arr[], int size) 
{
    T minValue = arr[0];  // Assume the first element is the minimum

    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < minValue) 
        {
            minValue = arr[i];
        }
    }
    return minValue;
}


int main() 
{
    int intArr[] = {3, 1, 4, 1, 5, 9};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Minimum in integer array: " << minElement(intArr, intSize) << endl;


    float floatArr[] = {3.5, 1.2, 4.8, 1.1, 2.9};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "Minimum in float array: " << minElement(floatArr, floatSize) << endl;

    string strArr[] = {"apple", "orange", "banana", "grape"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    cout << "Minimum in string array: " << minElement(strArr, strSize) << endl;

    return 0;
}