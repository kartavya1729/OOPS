#include <iostream>
using namespace std;
int main() 
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    int greatest = num1;

    if (num2 > greatest)
        greatest = num2;

    if (num3 > greatest)
        greatest = num3;

    cout << greatest << std::endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n1, n2, n3;

//     cin >> n1 >> n2 >> n3;

//     if (n1 >= n2 && n1 >= n3)
//         cout << n1 << endl;
//     else if (n2 >= n1 && n2 >= n3)
//         cout <<  n2 << endl;
//     else
//         cout << n3 << endl;

//     return 0;
// }