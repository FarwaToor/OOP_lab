// ConsoleApplication74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int size;
    int* arr;
    cout << " Enter the size of an array : ";
    cin >> size;
    arr = new int[size];
    cout << " Enter the elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int max = arr[0];
    int sec_max=arr[0];
    int min = arr[size-1];
    int sec_min=arr[size-1];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {

            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] > sec_max)
            sec_max = arr[i];
    }
    cout << " Second Highest number is : " << sec_max<<endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            sec_min = min;
            min = arr[i];
        }
        else if (arr[i] < sec_min)
            sec_min = arr[i];
    }

    cout << " Second Smallest number is : " << sec_min;
}

