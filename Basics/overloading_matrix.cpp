#include <iostream>
#include <vector>
using namespace std;

class Matrix 
{
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    // Constructor to initialize the matrix with dimensions and elements
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

    void inputMatrix() 
    {
        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                cin >> data[i][j];
            }
        }
    }

    Matrix operator+(const Matrix& other) 
    {
        if (rows != other.rows || cols != other.cols) 
        {
            throw invalid_argument("Matrix dimensions must match for addition.");
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

    Matrix operator*(const Matrix& other) 
    {
        if (cols != other.rows) 
        {
            throw invalid_argument("Matrix dimensions must align for multiplication.");
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < other.cols; ++j) 
            {
                for (int k = 0; k < cols; ++k) 
                {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    void printMatrix() const 
    {
        for (const auto& row : data) 
        {
            for (const auto& elem : row) 
            {
                cout << elem << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;

    Matrix mat1(r1, c1);
    mat1.inputMatrix();

    cin >> r2 >> c2;
    Matrix mat2(r2, c2);
    mat2.inputMatrix();

    try 
    {
        Matrix sum = mat1 + mat2;
        sum.printMatrix();
        cout << endl;

        Matrix product = mat1 * mat2;
        product.printMatrix();
    } 
    catch (const exception& e) 
    {
        cerr << e.what() << endl;
    }

    return 0;
}