
// ConsoleApplication73.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Matrix
{
private:
    /*const static int size = 2;
    int arr[size][size];*/
    int row;
    int col;

    int** arr;
public:
    Matrix()
    {


        cout << " Enter the rows of array : ";
        cin >> row;
        cout << " Enter the columnss of array : ";
        cin >> col;

        arr = new int* [row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arr[i][j] = 0;
            }
        }

    }


    //overload to input
    friend istream& operator>>(istream& input, Matrix& m)
    {
        for (int i = 0; i < m.row; i++)
        {
            for (int j = 0; j < m.col; j++)
            {
                input >> m.arr[i][j];
            }
        }
        return input;
    }
    //overload to add
    Matrix operator+(Matrix& m)
    {
        Matrix M;
        if (row == m.row && col == m.col) {
            for (int i = 0; i < m.row; i++)
            {
                for (int j = 0; j < m.col; j++)
                {
                    M.arr[i][j] = arr[i][j] + m.arr[i][j];

                }
            }
        }
        else
            cout << " rows and columns are not equal ! " << endl;
        return M;

    }
    //overload to subtract
    Matrix operator-(Matrix& m)
    {
        Matrix M;
        if (row == m.row && col == m.col) {
            for (int i = 0; i < m.row; i++)
            {
                for (int j = 0; j < m.col; j++)
                {
                    M.arr[i][j] = arr[i][j] - m.arr[i][j];

                }
            }
        }
        else
            cout << " Rows and columns are not equal ! ";
        return M;

    }

    Matrix operator*(Matrix& m)
    {
        Matrix M;
        /* for (int i = 0; i < m.row; i++)
         {
             for (int j = 0; j < m.col; j++)
             {
                 M.arr[i][j] = 0;
             }
         }*/
        if (col == m.row) {

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    for (int k = 0; k < m.col; k++)
                    {
                        M.arr[i][j] += arr[i][k] * m.arr[k][j];

                    }
                }
            }
        }
        else
            cout << " rows and columns don't match " << endl;
        return M;
    }
    friend ostream& operator<<(ostream& output, Matrix& m)
    {
        for (int i = 0; i < m.row; i++)
        {
            for (int j = 0; j < m.col; j++)
            {
                output << m.arr[i][j] << " ";
            }
            output << endl;
        }
        return output;
    }

};
int main()
{
    Matrix m1;
    cout << " Enter the elements of first matrix : ";
    cin >> m1;
    Matrix m2;
    cout << " Enter the elements of second matrix : ";
    cin >> m2;
    cout << "\n Lets add two matrices " << endl;
    Matrix m3 = m1 + m2;
    cout << m3 << endl;
    cout << "\n Lets subtract two matrices " << endl;
    Matrix m4 = m2 - m1;
    cout << m4 << endl;
    cout << "\n Lets multiply two matrices " << endl;
    Matrix m5 = m1 * m2;
    cout << m5 << endl;

}
