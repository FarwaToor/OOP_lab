

// task_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class string_type
{

private:
    string str1;
    string str2;
    char str3[50];
    char str4[50];

public:
    string_type()
    {
        str1 = "";
        str2 = "";
        str3[50] = {};
        str4[50] = {};

    }
    void setter()
    {
        cin.ignore();
        cout << " enter first string " << endl;
        getline(cin, str1);

        cin.ignore();
        cout << " \nenter sec string " << endl;
        getline(cin, str2);

    }
    void getter()
    {
        cout << "  first string : " << endl;

        cout << str1 << endl;

        cout << " second string : " << endl;

        cout << str2 << endl;

    }
    void max_length()
    {
        int i;
        int l = 0;
        int l1 = 0;
        for (i = 0; str1[i] != '\0'; i++)
        {
            l++;
        }
        cout << " maximum length of 1st string is : " << l << endl;
        for (int i = 0; str2[i] != '\0'; i++)
        {
            l1++;
        }
        cout << " maximum length of 2nd string is : " << l1 << endl;
    }
    void copy()
    {
        cout << endl;
        int j;
        cin.ignore();
        cout << " enter string to be copied : ";
        cin.getline(str3, 50);

        cout << endl;
        for (j = 0; str3[j] != '\0'; j++)
        {
            str4[j] = str3[j];
        }
        str4[j] = '\0';

        cout << " copied string : " << endl;
        cout << str4;
        cout << endl;
    }

    void compare()
    {

        if (str1 == str2)
            cout << " both strings are eqaual " << endl;

        else if (str1 != str2)
            cout << " not equal !" << endl;


    }
    void append()
    {
        int i, j;

        cout << endl;
        cin.ignore();
        cout << " enter first string : ";
        cin.getline(str3, 50);
        cout << endl;
        cin.ignore();
        cout << " enter sec string : ";
        cin.getline(str4, 50);
        cout << endl;
        for (i = 0; str3[i] != '\0'; i++)
        {

        }
        for (j = 0; str4[j] != '\0'; j++, i++)
        {
            str3[i] = str4[j];
        }
        str3[i] = '\0';
        cout << " concatenated string : " << endl;
        for (int k = 0; str3[k] != '\0'; k++)
            cout << str3[k];

    }
    void search_char()
    {
        int f = 0;
        cin.ignore();
        cout << " enter  string : " << endl;
        getline(cin, str1);
        char chr;
        cout << " \nenter the character you want to find : " << endl;
        cin >> chr;
        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] == chr)
            {
                f = 1;

            }

        }
        if (f == 1)
        {
            cout << "'" << chr << "' exists in this string " << endl;
        }
        else
            cout << " this character doesn't exist in string " << endl;
    }
    void search_word()
    {
        int a;
        int  b;
        int i, j;
        cin.ignore();
        cout << " enter a string: " << endl;
        cin.getline(str3, 50);
        cout << str1;
        cout << " \nenter the word you wannt to find :" << endl;
        cin.getline(str4, 50);
        cout << endl;
        a = strlen(str3);

        b = strlen(str4);
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                if (str3[i + j] != str4[j])
                    break;
            }
            if (j == b)
                cout << " word found ;) . It is at index " << i + 1 << endl;

        }

    }



};
void menu()
{
    cout << "\n\t1.Set Vlaues " << endl;
    cout << "\n\t2.Print Values" << endl;
    cout << "\n\t3.Maximum Length" << endl;
    cout << "\n\t4.Copy String" << endl;
    cout << "\n\t5.Compare Strings" << endl;
    cout << "\n\t6.Concatenate strings" << endl;
    cout << "\n\t7.Search Character" << endl;
    cout << "\n\t8.Search Word" << endl;
    cout << "\n\t9.Exit" << endl;
}

int main()
{
    menu();

    string_type s;
    int choice;
    do {
        cout << "____________________CHOICE_______________________" << endl;
        cout << endl << " enter the choice : ";

        cin >> choice; cout << endl;
        switch (choice)
        {
        case 1:
            s.setter();

            break;
        case 2:
            s.getter();
            break;
        case 3:
            s.max_length();
            break;
        case 4:
            s.copy();
            break;
        case 5:
            s.compare();
            break;
        case 6:

            s.append();
            break;
        case 7:
            s.search_char();
            break;
        case 8:
            s.search_word();
            break;
        case 9:
            cout << " Exit ! " << endl;
            break;
        default:
            cout << " invalid  choice " << endl;
            break;
        }



    } while (choice != 9);


}