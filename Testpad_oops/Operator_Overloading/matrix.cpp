#include<iostream>
using namespace std;

class Matrix {
private:
    int m, n;
    int a[20][20];  // Matrix elements

public:
    Matrix(int x, int y) 
    {
        m = x;
        n = y;
    }

    void readmat() 
    {
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cin >> a[i][j];
            }
        }
    }


    Matrix operator+(Matrix a2) 
    {
        Matrix temp(m, n);  // Create a temporary matrix for storing the result
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                temp.a[i][j] = a[i][j] + a2.a[i][j];  // Add corresponding elements
            }
        }
        return temp;  // Return the result matrix
    }


    void display() 
    {
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cout << a[i][j] << " ";  // Print each element followed by a space
            }
            cout << endl;  // Move to the next row
        }
    }
};


int main() 
{
    int m, n;
    cin >> m >> n;

    // Create two matrix objects
    Matrix mat1(m, n), mat2(m, n);

    mat1.readmat();
    mat2.readmat();

    Matrix result = mat1 + mat2;

    result.display();

    return 0;
}