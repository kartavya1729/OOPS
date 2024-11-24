#include <iostream>
using namespace std;

const int LIMIT = 20; // Fixed array size

class SafeArray 
{
private:
    int arr[LIMIT];

public:
    // Constructor to initialize the array elements to 0
    SafeArray() 
    {
        for (int i = 0; i < LIMIT; i++) 
        {
            arr[i] = 0;
        }
    }

    void putElement(int index, int value) 
    {
        if (index >= 0 && index < LIMIT) 
        {
            arr[index] = value;
        } 

        else 
        {
            cout << "Out of Bounds" << endl;
        }
    }

    // Function to retrieve an element from the array
    int getElement(int index) const 
    {
        if (index >= 0 && index < LIMIT) 
        {
            return arr[index];
        } 

        else 
        {
            cout << "Out of Bounds" << endl;
            return -1;
        }
    }
};

int main() {
    SafeArray sa1;
    int n;
    cin >> n; // Number of elements to process

    for (int i = 0; i < n; i++) 
    {
        int value, index;
        cin >> value >> index;

        sa1.putElement(index, value);

        int retrieved = sa1.getElement(index);

        if (retrieved != -1) 
        {
            cout << retrieved << endl;
        }
    }
    return 0;
}