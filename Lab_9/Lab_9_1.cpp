// ConsoleApplication95.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct B
{
    int no_of_tires;
    int size;
    int no_of_seates;
};
class vehicle
{
protected:
    B b;
public:
    vehicle()
    {
        b.no_of_tires = 0;
        b.size = 0;
        b.no_of_seates = 0;
    }
    virtual void setter()
    {
        cout << " Enter the num of tires : ";
        cin >> b.no_of_tires;
        cout << " Enter the size : ";
        cin >> b.size;
        cout << " Enter number of seats : ";
        cin >> b.no_of_seates;

    }

    int get_tyre() { return b.no_of_tires; }
    int get_size() { return b.size; }
    int get_seat() { return b.no_of_seates; }

    virtual void print()
    {
        cout << "\n Vehicle Information \n";
        cout << "-------------------\n";
        cout << "\n Num of Tyres : " << get_tyre();
        cout << "\n Size : " << get_size();
        cout << "\n Num of seats : " << get_seat();
    }
    ~vehicle(){}
};

class car :public vehicle
{
protected:
    B b;
    string color;
public:
    car()
    {
        b.no_of_tires = 0;
        b.size = 0;
        b.no_of_seates = 0;
        color = "";
    }
    virtual void setter()
    {
        cout << " Enter the num of tires : ";
        cin >> b.no_of_tires;
        cout << " Enter the size : ";
        cin >> b.size;
        cout << " Enter number of seats : ";
        cin >> b.no_of_seates;
        cout << " Enter the colour : ";
        cin >> color;
    }
    int get_tyre() { return b.no_of_tires; }
    int get_size() { return b.size; }
    int get_seat() { return b.no_of_seates; }
    string get_color() { return color; }

    virtual void print()
    {
        //vehicle::print();
        cout << "\n Car Information \n";
        cout << "-------------------\n";
        cout << "\n Num of Tyres : " << get_tyre();
        cout << "\n Size : " << get_size();
        cout << "\n Num of seats : " << get_seat();
        cout << "\n Color : " << get_color();

    }
    ~car(){}
};
class vitz : public car
{
protected:
    B b;
    string color;
    string model;
    string plate_num;
public:
    vitz()
    {
        b.no_of_tires = 0;
        b.size = 0;
        b.no_of_seates = 0;
        model = "";
        plate_num = "";
    }
    void setter()
    {
        //car::setter();
        cout << " Enter the num of tires : ";
        cin >> b.no_of_tires;
        cout << " Enter the size : ";
        cin >> b.size;
        cout << " Enter number of seats : ";
        cin >> b.no_of_seates;
        cout << " Enter the colour : ";
        cin >> color;
        cout << " Enter the model : ";
        cin >> model;
        cout << " Enter plate number : ";
        cin >> plate_num;
    }
    string get_model() { return model; }
    string get_plt_num() { return plate_num; }

    void print()
    {
        //car::print();
        cout << "\n Vitz Information \n";
        cout << "-------------------\n";
        cout << "\n Num of Tyres : " << get_tyre();
        cout << "\n Size : " << get_size();
        cout << "\n Num of seats : " << get_seat();
        cout << "\n Color : " << get_color();
        cout << "\n Model : " << get_model();
        cout << "\n Plate Number : " << get_model();
    }
    ~vitz(){}
};
int main()
{
    cout << "\n1.\t Vehicle Info\n2.\t Car Info\n3.\t Vitz Info" << endl;
    int choice;
    do {
        cout << "____________________________________________________________" << endl;
        cout << " Enter your choice : ";
        cin >> choice;
        switch (choice) {
        case 1:
        {
            vehicle v;
            v.setter();
            v.print();
            cout << endl;
            break;
        }
        case 2:
        {
            vehicle* v;
            car c;
            v = &c;
            v->setter();
            v->print();
            cout << endl;
            break;
        }
        case 3:
        {
            car* c;
            vitz v;
            c = &v;
            c->setter();
            c->print();
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Exit";
            break;
        }
        default:
            cout << " Invalid Choice !  " << endl;
        }
    } while (choice != 4);

                

   // vehicle* v;


    /*  vitz v;
      v.setter();
      v.print();*/
}


