// ConsoleApplication82.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
#define funct(e,f) (e^f)

struct point
{
    int p1_x[5];
    int p2_x[5];
    int p1_y[5];
    int p2_y[5];
    int total[5];

};
struct bits
{
    point d;
    int n_bit; int f; int e;

    void x()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << " Enter the 1st x-point of " << i + 1 << " city : ";
           cin>> d.p1_x[i];
           cout << endl;
            cout << " Enter the bit you want to clear : "<<endl;
            cin >> n_bit;
            e = d.p1_x[i];
            f = (1 << n_bit);
            d.p2_x[i] = funct(e, f);
        }
        cout << " Before toggling (P1)    and     After toggling (P2) " << endl;

        for (int i = 0; i < 5; i++)
        {

            cout << d.p1_x[i] << "         " << d.p2_x[i] << endl;
        }
    }


    void y()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << " Enter the 1st y-point of " << i + 1 << " city : ";
            cin >> d.p1_y[i];
            cout << endl;
            cout << " Enter the bit you want to clear  "<<endl;
            cin >> n_bit;
            e = d.p1_y[i];
            f = (1 << n_bit);
            d.p2_y[i] = funct(e, f);
        }
        cout << " Before toggling (P1)    and     After toggling (P2) " << endl;

        for (int i = 0; i < 5; i++)
        {

            cout << d.p1_y[i] << "         " << d.p2_y[i] << endl;
        }
    }
     
    

    void total_dis() 
    {
        
        for (int i = 0; i < 5; i++) 
        {
            d.total[i] = abs(d.p1_x[i] - d.p2_x[i]) + abs(d.p1_y[i] - d.p2_y[i]);
        }
    }

    void Matrix() 
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << abs(d.total[i] - d.total[j])<<" ";
            }
            cout << endl;
        }
    }

};


int main()
{
    bits b;
    b.x();
    b.y();
    b.total_dis();
    cout << " The pairwise distance matrix is : " << endl;
    b.Matrix();
}

