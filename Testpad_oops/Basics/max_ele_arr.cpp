#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }

    int maxEle = INT_MIN;

    for (int i = 0; i < N; i++) 
    {
        if (arr[i] > maxEle) 
        {
            maxEle = arr[i];
        }
    }
    cout << maxEle << endl;
    return 0;
}