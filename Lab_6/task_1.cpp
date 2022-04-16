//Your task is to write a program that checks the ID of the officer and allows entry. Also, you are required to keep the count of
//how many officers have entered the area. 
//The rule is “If an officer’s Id is equal to its reverse i.e., it is a palindrome. The officer is not allowed to enter the area”.

#include <iostream>
#include <string>
using namespace std;
class officers
{
private:
    static int count;

    string name;
    string rank;
    int ID;
public:
    officers() 
    {
        name = "";
        rank = "";
        ID = 0;
        
    }
    void input()
    {
        cout << " Enter the name of the officer : ";
        cin.ignore();
        getline(cin , name);
        cout << "\n Enter the ID of the officer : ";
        cin >> ID;
        cout << "\n Enter the rank : ";
        cin >> rank;
        cout << endl;
    }
    void check()
    {
        int temp; int rem; int digit = 0; 
        temp = ID;
        while (temp != 0) 
        {
            rem = temp % 10;
            digit = (digit *10) + rem;
            
            temp = temp / 10;

        }
        cout << "Resverse of ID is : " << digit<<endl;
        if (ID == digit) {
            cout << " Officer can't enter the restricted area! " << endl;

        }
        else {
            count++;
            cout << " This officer is allowed to enter the restricted area. " << endl;
        }
    }
   
    static void countOff() {
        cout <<"\nNumber of officers that have entered the restricted area is : "<< count << endl;;
    }
};
int officers::count = 0;
void menu()
{
    cout << "_____________________________________________________" << endl;
    cout << "\n1.\t Enter ID of the officer " << endl;
    cout << "\n2.\t Get total number of the officers " << endl;
    cout << "\n3.\t Exit." << endl;
    cout << "______________________________________________________" << endl;
}

int main()
{
    menu();
   
    officers o;
    int choice;
    do {
        cout << "----------------------------------------------------" << endl;
        cout << " Enter your choice : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1: 
        {
            o.input();
            o.check();

            break; 
        }
        case 2:
            officers::countOff();
            break;
        case 3:
            cout << " Exit " << endl;
            break;
        default:
            cout << " invalid choice ! " << endl;

        }
    }
    while (choice != 3);

}

