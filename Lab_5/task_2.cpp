// ConsoleApplication74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class parity 
{
private:
    int size;
    int* arr;
public:
    parity()
    {
        size = 0;

    }
    parity(int num)
    {
        size = num;

    }
   
    void setter() 
    {
        arr = new int[size];
        cout << " Enter the elements of the array : " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
    }
    
    void new_element() 
    {
        int n;
        cout << "\n Enter you want to add : ";
        cin >> n;
        size++;
        int* temp;
        temp = new int[size];
        for (int i = 0; i < size - 1; i++) 
        {
            temp[i] = arr[i];
        }
        temp[size - 1] = n;
        delete[]arr;
        arr = temp;

    }

    void getter() 
    {
        cout << "concatenated array is :  " << endl;
        for (int i = 0; i < size; i++)
        {
            cout<< arr[i]<<" ";
        }
    }
    void del_element() 
    {
        size--;
        cout << " Let's delete added element +_+ " << endl;
        int* temp = new int[size];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        delete[]arr;
        cout << endl;
        arr = temp;

        cout << " deleted array is :  " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;


    }
    int check()
    {
        if (size % 2 == 0)
            return 1;
        else
            return 0;
    }
   


};
void menu()
{
    cout << "\n\t1.Put new element at the last position" << endl;
    cout << "\n\t2.Print added array " << endl;
    cout << "\n\t3.Delete added element from last position" << endl;
    cout << "\n\t4.Test the number " << endl;
    cout << "\n\t5.Exit" << endl;
}
int main()
{
    int num;
    cout << " Enter the size of array : ";
    cin >> num;
   
    menu();
    parity p(num);
    int choice;
    do {
        cout << " \nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            p.setter();
            p.new_element();
            
            break;
        }
        case 2:
        {
            p.getter();
            break;

        }
        case 3:
        {
            p.del_element();
            break;
        }
        case 4:
        {
          cout<<  p.check();
            break;
        }
        case 5:
            cout <<"Exit" << endl;
        default:
            cout << " invalid choice " << endl;

        }
    } while (choice != 5);
}

