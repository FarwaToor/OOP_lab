//write a pprogram that transfers an array into an array of it's differences repeatedly

#include <iostream>
using namespace std;
int main()
{
    int size;
    int *arr;
   
    cout << " enter the size of an array : ";
    cin >> size;
    arr = new int[size];
    cout << " Enter the elements of an array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

    }
    cout << endl;
    int* temp;
    int s = size - 1;
    temp = new int[s];
    for (int i = 0; i < s; i++) 
    {
        temp[i] = arr[i + 1] - arr[i];
    }
    delete[]arr;
    arr = new int[s];
    for (int i = 0; i < s; i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }


}

