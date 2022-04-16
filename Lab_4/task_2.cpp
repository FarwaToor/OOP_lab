// ConsoleApplication74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Matrix
{
private:
    int size;
    int** arr;
    int** trans;
public:
    Matrix() 
    {
        cout<<" enter the size of array : ";
        cin >> size;
       arr = new int* [size];
       
       for (int i = 0; i < size; i++)
       {
           arr[i] = new int[size];
       }
       trans = new int* [size];
       for (int i = 0; i < size; i++)
           trans[i] = new int[size];

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
             arr[i][j]=0;

        }

    }
    void setter()
    {
        cout << "\n lets initialize the array " << endl;
        for (int i = 0; i < size; i++)
        {
            
            for (int j = 0; j < size; j++)
                cin>>arr[i][j];
            
        }

    }
    void getter()
    {
        cout << " printing the array " << endl;
        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
                cout<< arr[i][j]<<" ";
            cout << endl;
        }

    }
    void transpose()
    {
        
       

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
                trans[i][j]=arr[j][i];

        }
        cout << "\nTranspose Matrix is :" << endl;
        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < size; j++)
                cout << trans[i][j]<<" ";
            cout << endl;
        }

    }
    void symmetry()
    {
        int f;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
            if (trans[i][j] == arr[i][j])
                f = 1;
            else f = 0;
            }
        }
        if (f == 1)
            cout << "\n Matrix is symmetric " << endl;
        else
            cout << " \nMatrix is non-symmetric " << endl;

    }
};
int main()
{
    Matrix m;
    m.setter();
    m.getter();
    m.transpose();
    m.symmetry();

}
