#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    // Constructor to initialize matrix with dimensions and default values
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

    void input() 
    {
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                cin >> data[i][j];
            }
        }
    }

    // Overload + operator for matrix addition
    Matrix operator+(const Matrix& other) 
    {
        if (rows != other.rows || cols != other.cols) 
        {
            throw invalid_argument("Matrix dimensions do not match for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    void display() const 
    {
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    int M, N;
    cin >> M >> N;

    Matrix mat1(M, N), mat2(M, N);
    mat1.input();
    mat2.input();

    try 
    {
        Matrix result = mat1 + mat2;
        result.display();
    } 
    catch (const exception& e) 
    {
        cerr << e.what() << endl;
    }

    return 0;
}