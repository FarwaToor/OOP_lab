// ConsoleApplication82.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
#define funct(e,f) (e^f)

struct point
{
    int x;

    int y;

    int total[5];

};
struct bits
{
    point d;
    int n_bit;

   

};
void xy(bits b[], int size)
{
    for (int i = 0; i < 5; i++)
    {
         int f; int e;
        cout << " Enter any 32 bit value : ";
        cin >> b[i].d.x;
        cout << endl;
        cout << " Enter nth bit to clear (0-32): " ;
        cin >> b[i].n_bit;
        e = b[i].d.x;
        f = (1 <<b[i].n_bit);
       b[i].d.y = funct(e, f);
    }
    cout << " Before toggling (P1)    and     After toggling (P2) " << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << b[i].d.x << "         " << b[i].d.y << endl;
    }
}





void Matrix(bits b[], int size)
{
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = abs(b[i].d.x - b[j].d.x) + abs(b[i].d.y - b[j].d.y);
        }

    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat[i][j]<<"  ";
        }
        cout << endl;

    }
}


int main()
{
    const int size = 5;
    bits b[size];
    
    
    xy(b,size);


    cout << " The pairwise distance matrix is : " << endl;
    Matrix(b,size);
}

