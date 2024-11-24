#include <iostream>
using namespace std;

int main() 
{
  int i, n;
  int arr[n];

  cin >> n;

  for(i = 0; i < n; ++i) 
  {
    cin >> arr[i];
  }

  for(i = 1;i < n; ++i) 
  {
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << arr[0];

  return 0;
}



// #include <iostream>
// #include<climits>
// using namespace std;

// int main() 
// {
//   int i, n;
//   int arr[n];

//   cin >> n;
//   int max  = INT_MIN;
  
//   for(i = 0; i < n; ++i) 
//   {
//     cin >> arr[i];
//   }

//   for(i = 0;i < n; ++i) 
//   {
//     if(max < arr[i])
//     max = arr[i];
//   }

//   cout << max;

//   return 0;
// }