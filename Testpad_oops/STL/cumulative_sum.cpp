#include <iostream>
#include <vector>
using namespace std;

// Function to compute the cumulative sum of the vector
void cumulative(vector<int>& vec) {
    // Start from the second element and add the previous element to it
    for (int i = 1; i < vec.size(); i++) {
        vec[i] += vec[i - 1];  // Add the previous element to the current element
    }
}

int main() 
{
    int N;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < N; i++) 
    {
        cin >> vec[i];
    }

    cumulative(vec);

    for (int i = 0; i < N; i++) 
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}