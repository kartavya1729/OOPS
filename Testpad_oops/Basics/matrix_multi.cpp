void multiplyMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int R1, int C1, int R2, int C2) 
{
    int result[SIZE][SIZE] = {0}; // Initialize result matrix to 0

    for (int i = 0; i < R1; i++) 
    {
        for (int j = 0; j < C2; j++) 
        {
            for (int k = 0; k < C1; k++) 
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Print the resultant matrix
    for (int i = 0; i < R1; i++) 
    {
        for (int j = 0; j < C2; j++) 
        {
            cout << result[i][j]<<" ";
        }
      cout<<endl;
    }
}

// #include <iostream>
// using namespace std;

// #define SIZE 100

// void multiplyMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int R1, int C1, int R2, int C2) 
// {
//     // Resultant matrix dimensions will be R1 x C2
//     int result[SIZE][SIZE] = {0}; // Initialize result matrix to 0

//     for (int i = 0; i < R1; i++) 
//     {
//         for (int j = 0; j < C2; j++) 
//         {
//             for (int k = 0; k < C1; k++) 
//             {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     cout << "Resultant Matrix:" << endl;
//     for (int i = 0; i < R1; i++) 
//     {
//         for (int j = 0; j < C2; j++) 
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() 
// {
//     int A[SIZE][SIZE], B[SIZE][SIZE];
//     int R1, C1, R2, C2;

//     cout << "Enter the number of rows and columns of the first matrix: ";
//     cin >> R1 >> C1;

//     cout << "Enter elements of the first matrix:" << endl;
//     for (int i = 0; i < R1; i++) 
//     {
//         for (int j = 0; j < C1; j++) 
//         {
//             cin >> A[i][j];
//         }
//     }

//     cout << "Enter the number of rows and columns of the second matrix: ";
//     cin >> R2 >> C2;

//     if (C1 != R2) 
//     {
//         cout << "Matrix multiplication is not possible. Number of columns of the first matrix must equal the number of rows of the second matrix." << endl;
//         return 0;
//     }

//     cout << "Enter elements of the second matrix:" << endl;
//     for (int i = 0; i < R2; i++) 
//     {
//         for (int j = 0; j < C2; j++) 
//         {
//             cin >> B[i][j];
//         }
//     }
//     multiplyMatrix(A, B, R1, C1, R2, C2);

//     return 0;
// }