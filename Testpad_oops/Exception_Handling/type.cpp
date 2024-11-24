#include <iostream>
#include <string>
using namespace std;

void cq1(int n) 
{
    try {
        if (n < 0) 
        {
            throw -1;       // Throw -1 for negative values
        } 

        else if (n == 0) 
        {
            throw "ZERO";   // Throw "ZERO" for zero
        } 

        else 
        {
            throw 1.0;      // Throw 1.0 for positive values
        }
    }


    catch (int e) 
    {
        if (e == -1) 
        {
            cout << "NEGATIVE" << std::endl;
        }
    }


    catch (const char* e) 
    {
        if (e == "ZERO") 
        {
            cout << "ZERO" << endl;
        }
    }


    catch (double e) 
    {
        if (e == 1.0) 
        {
            cout << "POSITIVE" << endl;
        }
    }
}


int main() {
    cq1(-5);   // Output: NEGATIVE
    cq1(0);    // Output: ZERO
    cq1(10);   // Output: POSITIVE

    return 0;
}