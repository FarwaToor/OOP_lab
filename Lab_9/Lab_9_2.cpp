// ConsoleApplication96.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
struct A
{
    string name;
    string eye_col;
    string hair_col;
};
class baba 
{
protected:
   
    A prp;
public:

    baba() 
    {
        prp.name = "";
        prp.eye_col = "";
        prp.hair_col = "";
    }
    virtual void setter() 
    {
        cin.ignore();
        cout << " Enter Name : ";
        getline(cin, prp.name);
        cout << " Enter Eye colour : ";
        getline(cin, prp.eye_col);
        cout << " Enter Hair colour : ";
        getline(cin, prp.hair_col);
        cout << endl;

    }
    string get_name() { return prp.name; } string get_eye() { return prp.eye_col; } string get_hair() { return prp.hair_col; }

    virtual void display() 
    {
        cout << "\n Name : "<<get_name()<<endl;
        cout << " Eye Colour : " << get_eye() << endl;
        cout << " Hair Colour : " << get_hair() << endl;
    }
    ~baba(){}
};
class mama 
{
protected:
  
    A prp;
public:

    mama()
    {
        prp.name = "";
        prp.eye_col = "";
        prp.hair_col = "";
    }
    virtual void setter()
    {
        cin.ignore();
        cout << " Enter Name : ";
        getline(cin, prp.name);
        cout << " Enter Eye colour : ";
        getline(cin, prp.eye_col);
        cout << " Enter Hair colour : ";
        getline(cin, prp.hair_col);
        

    }
    string get_name() { return prp.name; } string get_eye() { return prp.eye_col; } string get_hair() { return prp.hair_col; }

    virtual void display()
    {
        cout << "\n Name : " << get_name() << endl;
        cout << " Eye Colour : " << get_eye() << endl;
        cout << " Hair Colour : " << get_hair() << endl;
    }
    ~mama(){}

};
class maain : public baba
{
protected:
    A prp;
    int age;
    string edu;
public:
    maain()
    {
        cin.ignore();
        prp.name = "";
        prp.eye_col = "";
        prp.hair_col = "";
        age = 0;
        edu = "";
    }
    void setter()
    {
        cout << " Enter Name : ";
        cin.ignore();
        getline(cin, prp.name);
        cout << " Enter Eye colour : ";
        getline(cin, prp.eye_col);
        cout << " Enter Hair colour : ";
        getline(cin, prp.hair_col);
        cout << " Enter Age : ";
        cin >> age;
        cout << " Enter Education -_- : ";
        cin >> edu;
        
    }
    string get_name() { return prp.name; } string get_eye() { return prp.eye_col; } string get_hair() { return prp.hair_col; }
    int get_age() { return age; } string get_edu() { return edu; }
    void display() 
    {
        cout << "\n Name : " << get_name() << endl;
        cout << " Eye Colour : " << get_eye() << endl;
        cout << " Hair Colour : " << get_hair() << endl;
        cout << " Age : " << get_age() << endl;
        cout << " Education : " << get_edu() << endl;

    }

    ~maain(){}
};
class sis :public mama ,public baba
{
protected:
    A prp;
    int age;
    string edu;
public:
    sis ()
    {
        prp.name = "";
        prp.eye_col = "";
        prp.hair_col = "";
        age = 0;
        edu = "";
    }
    void setter()
    {
        cin.ignore();
        cout << " Enter Name : ";
        getline(cin, prp.name);
        cout << " Enter Eye colour : ";
        getline(cin, prp.eye_col);
        cout << " Enter Hair colour : ";
        getline(cin, prp.hair_col);
        cout << " Enter Age : ";
        cin >> age;
        cout << " Enter Education -_- : ";
        cin >> edu;

    }
    string get_name() { return prp.name; } string get_eye() { return prp.eye_col; } string get_hair() { return prp.hair_col; }
    int get_age() { return age; } string get_edu() { return edu; }
    void display()
    {
        cout << "\n Name : " << get_name() << endl;
        cout << " Eye Colour : " << get_eye() << endl;
        cout << " Hair Colour : " << get_hair() << endl;
        cout << " Age : " << get_age() << endl;
        cout << " Education : " << get_edu() << endl;

    }
    ~sis(){}
};
int main()
{
    cout << " \n1.\tCharacteristics of Father \n2.\tCharacteristics of Mother \n3.\tCharacteristics of Me \n4.\tCharacteristics of Sister " << endl;
    int choice;
    do 
    {
     cout << "____________________________________________________________________________________" << endl;
     cout << " Enter Your choice : ";
     cin >> choice;
     switch (choice)
     {
        case 1:
        {
            cout << " Characteristics of Father : " << endl;
            baba b;
            b.setter();
            b.display();
            cout << endl;
            break;
        }
        case 2:
        {
            cout << " Characteristics of Mother : " << endl;
            mama m;
            m.setter();
            m.display();
            cout << endl;
            break;
           
        }
        case 3:
        {
            cout << " Characteristics of Myself : " << endl;
            maain m;
            baba* b;
            b = &m;
            b->setter();
            b->display();
            cout << endl;
            break;
        }
        case 4: 
        {
            cout << " Characteristics of Sister : " << endl;
            sis s; 
            mama* m;
            baba* b;
            b = &s;
            m = &s;
            b->setter();
            m->display();
            cout << endl;
            break;
        }
        case 5:
        {
            cout << " Exit " << endl;
            break;
        }
        default:
            cout << " Invalid Choice " << endl;
     }

    } while (choice != 5);
}

