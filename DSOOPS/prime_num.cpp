#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    cin >> n;

    cout << "Enter a positive integer: ";

    if (n <= 1) 
    {
        cout << "Not a prime number." << endl;
        return 0;
    }

    for (i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            cout << "Not a prime number." << endl;

            return 0;
        }
    }

    cout << "Prime number." << endl;
    return 0;
}

                                       // By using Flag variable

// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n, i, flag = 0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     for (i = 2; i <= n / 2; ++i) 
//     {
//         if (n % i == 0) 
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//         cout << "Prime number." << endl;
//     else
//         cout << "Not a prime number." << endl;

//     return 0;
// }
