// ConsoleApplication23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct user
{
    string name;
    int age;
    string city;

};
struct D_O_B {
    int day;
    string month;
    int year;
};
int main()
{
    user s[3];
    D_O_B bd[3];
    D_O_B check;
    cout << " ________________________________________________________________" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " ENTER THE RECORD OF " << i + 1 << " USER :" << endl;
        cout << " \nEnter the name : ";
        cin >> s[i].name;
        cout << " \nEnter the age : ";
        cin >> s[i].age;
        cout << " \nEnter the city : ";
        cin >> s[i].city;
        cout << endl;
        cout<<"-------------------------------------------------------------------" << endl;
        cout << " ENTER THE D.O.B :" << endl;
        cout << " Enter day : ";
        cin >> bd[i].day;
        if (bd[i].day <= 31)
        {
            cout << " \nEnter month : ";
            cin >> bd[i].month;
            cout << " \nEnter year : ";
            cin >> bd[i].year;
            cout << endl;

        }
        else 
        {
            cout << " SORRY! a month can't have day greater than 31 " << endl;
            break;
        }

    }
    for (int i = 0; i < 3; i++)
    {
        cout << "___________________________________________________________" << endl;
        cout << " ENTER THE D.O.B TO CHECK " << endl;
        cout << " Enter day : ";
        cin >> check.day;
        if (check.day <= 31) 
        {
            cout << " \nEnter month : ";
            cin >> check.month;
            cout << "\nEnter year : ";
            cin >> check.year;

        }
        else 
        {
            cout << " SORRY! a month can't have day greater than 31 " << endl;
            break;
        }
        if (check.day == bd[i].day && check.month == bd[i].month && check.year == bd[i].year)
        {
            cout << " IT IS " << s[i].name << "'S BIRTHDAY. HAPPY BIRTHDAY " << s[i].name;
            break;

        }
    }

}

