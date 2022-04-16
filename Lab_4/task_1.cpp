// ConsoleApplication74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class swamp
{
private :
    int a;
    int b;
public:
    swamp() 
    {
        a = 0;
        b = 0;
    }
    void setter() 
    {
        cout << " \nenter first number : ";
        cin >> a;
        cout << "\nenter second number : ";
        cin >> b;

    }
    void swa_funt() 
    {
        cout << " \nlet's swap the two numbers :D " << endl;
        a = a + b;
        b = a - b;
        a = a - b;
    }
    void getter() {
        cout << " \nFirst : " << a;
        cout << " \nSecond : " << b;
    }
};
int main()
{
    swamp s;
    s.setter();
    s.swa_funt();
    s.getter();

}

