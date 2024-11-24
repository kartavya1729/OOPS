#include<iostream>
using namespace std;

class ArrayClass {
private:
    int* ptr;  // pointer to Array contents
    int size;  // size of Array

public:
    // One-argument constructor
    ArrayClass(int s) {
        size = s;  // argument is size of Array
        ptr = new int[s];  // make space for Array
    }

    // Destructor
    ~ArrayClass() { 
        delete[] ptr;  // release allocated memory
    }

    // Copy Constructor (Deep copy)
    ArrayClass(const ArrayClass& other) {
        size = other.size;  // Copy size
        ptr = new int[size];  // Allocate new memory
        for (int i = 0; i < size; i++) {
            ptr[i] = other.ptr[i];  // Copy elements
        }
    }

    // Assignment Operator (Deep copy)
    ArrayClass& operator=(const ArrayClass& other) 
    {
        if (this == &other) 
        {
            return *this;  // Handle self-assignment
        }

        // Release the current resources
        delete[] ptr;

        // Allocate new memory and copy data
        size = other.size;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = other.ptr[i];
        }

        return *this;  // Return the current object
    }


    // Overloaded subscript operator
    int& operator[](int j) 
    { 
        return *(ptr + j);  // return reference to the element
    }

    // Function to print array (for testing)
    void print() const {
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create an ArrayClass object of size 5
    ArrayClass arr1(5);
    for (int i = 0; i < 5; i++) {
        arr1[i] = i + 1;  // Assign values to arr1
    }

    cout << "arr1: ";
    arr1.print();  // Output: 1 2 3 4 5

    // Test the copy constructor
    ArrayClass arr2(arr1);
    cout << "arr2 (copy of arr1): ";
    arr2.print();  // Output: 1 2 3 4 5

    // Test the assignment operator
    ArrayClass arr3(3);
    arr3 = arr1;
    cout << "arr3 (after assignment from arr1): ";
    arr3.print();  // Output: 1 2 3 4 5

    return 0;
}
