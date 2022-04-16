// ConsoleApplication46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class person
{
private:
    string uni_comp;
    string uni;
    string comp;
public:
    person()
    {
        cout << " Enter the uni and competition name : " << endl;
        cin.ignore();
        getline(cin, uni);
        getline(cin, comp);
        

    }
    friend class coordinator;
};

class coordinator
{
private:
    person p1;
    person p2;
public:
    void check()
    {
        int i;
        string l = p1.comp;
        string l1 = p2.comp;

        if (p1.uni == p2.uni)
        {
            cout << "P1 and P2 are roommates ;) ";
            if (l.length() >= l1.length())
            {
                cout << " , Room number is " << l.length() << endl;
            }
        }
        else
            cout << " P1 and P2 are not roommates :| " << endl;
    }
};

//can be done by using just one variable for uni and comp name
// by finding the length ofcompetition name
//as size - size of uni name


int main()
{
    coordinator c;
    c.check();
    cout << endl;

}