// Problem Statement:

// Given a Boolean matrix mat[MN] of size M X N modify it such that if a matte cat matilli) is (or true) then more at the cells of ith cow and ith column as

// Input format:

// The Test line of input consists of two integers mand in den ting the dimensions of the matrix

// The meat m lines of input consent of in space separated integers

// Output format: The output prints the modified matrix



#include <iostream>
using namespace std;

int main() 
{
    int M, N;
    cin >> M >> N;

    int mat[M][N];
    bool rows[M] = {false};
    bool cols[N] = {false};

    // Input matrix
    for (int i = 0; i < M; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1) 
            {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // Modify matrix
    for (int i = 0; i < M; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            if (rows[i] || cols[j]) 
            {
                mat[i][j] = 1;
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
