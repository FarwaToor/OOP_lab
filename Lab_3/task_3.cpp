//write c++ program to move all negative elements of an array to the end of  the array without changing order

#include <iostream>
using namespace std;
int main()
{
    int size;
    int* arr;
    cout << " Enter the size of an array : ";
    cin >> size;
    arr = new int[size];
    cout << " Enter the elements in array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int neg = 0, pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            neg++;
        else
            pos++;

    }
    int n = 0; int p = 0;
    int* neg_arr = new int[neg];
    int* pos_arr = new int[size - neg];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            neg_arr[n++] = arr[i];
        else
            pos_arr[p++] = arr[i];
       

    }
    int i;
    for (i = 0; i < p; i++)
        arr[i] = pos_arr[i];
    for (i = p; i < size; i++)
        arr[i] = neg_arr[i-p];

    for (int i = 0; i < size; i++) 
    {
        cout << arr[i]<<" ";
    }
    delete []neg_arr;
    delete[] pos_arr;
}

