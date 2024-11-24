#include <iostream>
using namespace std;

int cnt = 0; // Global counter to track object count

class Counter 
{
public:
    Counter() 
    {
        cnt++;
        cout << "Object created. Current count: " << cnt << endl;
    }

    ~Counter() {
        cnt--;
        cout << "Object destroyed. Current count: " << cnt << endl;
    }
};

int main() 
{
    cout << "Starting program..." << endl;

    Counter obj1; // Create first object
    {
        Counter obj2; // Create second object in a block
        Counter obj3; // Create third object in a block
        // Objects obj2 and obj3 will be destroyed at the end of this block
    }

    Counter obj4; // Create fourth object
    // Object obj4 will be destroyed at the end of the program

    cout << "Ending program..." << endl;

    return 0;
}