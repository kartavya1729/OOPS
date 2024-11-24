#include <iostream>
using namespace std;

class ArraySorter {
private:
    int* arr;
    int length;

public:
    // Constructor to initialize the array
    ArraySorter(int* inputArr, int len) 
    {
        length = len;
        arr = new int[length];
        for (int i = 0; i < length; ++i) 
        {
            arr[i] = inputArr[i];
        }
    }

    ~ArraySorter() 
    {
        delete[] arr;
    }

    void sortArray() 
    {
        for (int i = 0; i < length - 1; ++i) 
        {
            for (int j = 0; j < length - i - 1; ++j)
             {
                if (arr[j] > arr[j + 1]) 
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    void displayArray() const 
    {
        for (int i = 0; i < length; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    int n;
    cin >> n;

    int* inputArr = new int[n];

    for (int i = 0; i < n; ++i) 
    {
        cin >> inputArr[i];
    }

    ArraySorter sorter(inputArr, n);

    sorter.sortArray();

    sorter.displayArray();

    delete[] inputArr;

    return 0;
}