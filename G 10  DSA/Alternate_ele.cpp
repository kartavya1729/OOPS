#include <iostream>
#include <vector>
using namespace std;

vector<int> alternateTrains(const vector<int>& train1, const vector<int>& train2) 
{
    vector<int> result;

    int i = 0, j = 0;
    int m = train1.size(), n = train2.size();

    while (i < m && j < n) 
    {
        result.push_back(train1[i++]);
        result.push_back(train2[j++]);
    }

    while (i < m) 
    {
        result.push_back(train1[i++]);
    }

    while (j < n) 
    {
        result.push_back(train2[j++]);
    }

    return result;
}

int main() 
{
    int m = 3, n = 3;

    vector<int> train1 = {1, 2, 3};
    vector<int> train2 = {4, 5, 6};

    vector<int> result = alternateTrains(train1, train2);

    cout << "Output: ";

    for (int num : result) 
    {
        cout << num << " ";
    }
    
    cout << endl;

    return 0;
}
