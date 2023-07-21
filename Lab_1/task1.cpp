// ConsoleApplication24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct student
{
    string name;
    string reg_no;
    string faculty;
    int course;
    int marks[3];
    

};
int main()
{
    int CH = 3;
    float sum = 0;
    student s[3];
    float GPA[3];
    float SGPA[3];
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"___________________________________________________" << endl;
        cout << "ENTER THE RECORD OF " << i + 1 << " STUDENT " << endl;
        cout << "___________________________________________________" << endl;
        cout << " Enter the name : ";
        cin >> s[i].name;
        cout << " \nEnter reg_no : ";
        cin >> s[i].reg_no;
        cout << " \nEnter the degree program : ";
        cin >> s[i].faculty;
        cout << " \nEnter the number of courses : ";
        cin >> s[i].course;
        for (int i = 0; i < 3; i++)
        {
            cout << " \nEnter the marks of " << i + 1 << "course : ";
            cin >> s[i].marks[i];
            cout << endl;

            if (s[i].marks[i] > 90)
                GPA[i] = 3.7;
            else if (s[i].marks[i] < 90 && s[i].marks[i]>80)
                GPA[i] = 3.3;
            else if (s[i].marks[i] < 80 && s[i].marks[i]>70)
                GPA[i] = 2.9;
            else if (s[i].marks[i] < 70 && s[i].marks[i]>60)
                GPA[i] = 2.5;
            else if (s[i].marks[i] <= 60)
                GPA[i] = 0;

            
        }
	for(int j=0;j<3;j++)
	{
        SGPA[i] += (GPA[j] * CH);
	}
	SGPA[i]=SGPA[i]/9;

        cout << " SGPA OF " << i + 1 << " student is : "<<SGPA[i];

        cout << endl << endl;

    }
    
    

}

