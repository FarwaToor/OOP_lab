// ConsoleApplication74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class temp
{
private:
    int temperature;
public:
    temp()
    {
        temperature = 15;
    }
    void accessor()
    {
        cout << "original temperature is : " << 15<< endl;;
    }
    void cooler()
    {
        temperature = temperature + 5;
    }
    void heater()
    {
        temperature = temperature - 5;
    }
    void getter() 
    {
        cout << " Temperature : " << temperature << endl;
    }
};
int main()
{
    temp t;
    cout << "\n1.\tOriginal Temperature \n2.\tDecreased Temperature \n3.\tIncreased Temperature \n4.\tExit" << endl;
    int choice;
    do
    {
        cout << " Enter your choice : ";
        cin >> choice;
        cout << endl;
        switch(choice)
        { 
        case 1:     
        {
            t.accessor();
            break; 
        }
        case 2:
        {
            t.heater();
            t.getter();
            break;
        }
        case 3:
        {
            t.cooler();
            t.getter();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
            cout << " Invalid choice! " << endl;



        }
       




    } while (choice != 4);
    
}

