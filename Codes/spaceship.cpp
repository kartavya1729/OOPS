// Q 3. Engineers are building an advanced spaceship for interstellar travel. Create a class Spaceship with a dynamic array representing modules. 
// Implement a constructor to initialize the spaceship with a specified number of modules, and a destructor to release the dynamically allocated memory when the spaceship is decommissioned.
 
//  Test Case:
//  Input: Number of Modules = 10
//  Output: A spaceship with 10 modules, and memory released when the spaceship is decommissioned

#include <iostream>
using namespace std;

class Spaceship {
private:
    int* modules;    // Dynamic array to store modules
    int numModules;  // Number of modules

public:
    Spaceship(int n) : numModules(n) 
    {
        modules = new int[numModules];

        for (int i = 0; i < numModules; ++i) 
        {
            modules[i] = i + 1;
        }
        cout << "Spaceship created with " << numModules << " modules." << endl;
    }

    ~Spaceship() 
    {
        delete[] modules;  // Free the allocated memory
        cout << "Spaceship decommissioned, memory for " << numModules << " modules released." << endl;
    }
};

int main() {
    {
        Spaceship ship(10);
    } 

    return 0;
}