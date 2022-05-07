// ConsoleApplication93.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.14


class shape                       // 0
{
protected:
    int length;
    int width;
public:
    shape()
    {
        length = 0;
        width = 0;
    }
    virtual void setter()
    {
        cout << " Enter length : ";
        cin >> length;
        cout << " Enter width : ";
        cin >> width;
        cout << endl;
    }
    int get_len() { return length; } int get_wid() { return width; }

    virtual void area() = 0;

    virtual void display()
    {
        cout << " Length : " << get_len();
        cout << " Width : " << get_wid();
    }
    ~shape(){}
};


//   Derived classes

//   1st derive class 

class two_D :public shape         // 0.1
{
public:
    virtual void setter() = 0;
    void area()
    {
        cout << " AREA OF 2D SHAPES " << endl;
    }
    virtual void display() = 0;
    ~two_D(){}
};



//    1st   sub-derived classes

//    SHAPE->2D->CIRCLE


class circle :public two_D       // 0.1.1
{
protected:
    int radius;
    string color;
    float c_area;

public:
    circle()
    {
        radius = 0;
        color = "";
        c_area = 0.0;
    }
    void setter()
    {
        //two_D::setter();
        cout << " Enter the radius of circle : ";
        cin >> radius;
        cout << " Enter the colour of circle : ";
        cin >> color;
    }
    int get_rad() { return radius; } string get_color() { return color; }
    void area()
    {
        two_D::area();
        c_area = PI * radius * radius;


    }
    float get_area() { return c_area; }
    void display()
    {
        cout << "RADIUS of CIRCLE is :  " << get_rad() << endl;
        cout << " COLOUR of CIRCLE is : " << get_color() << endl;
        cout << " AREA of CIRCLE is : " << get_area() << endl;
    }
    ~circle(){}
};

//   SHAPE->2D->SQUARE


class square :public two_D       // 0.1.2
{
protected:
    int side;
    string color;
    int s_area;

public:

    square()
    {
        side = 0;
        color = "";
        s_area = 0;
    }

    void setter()
    {
        //two_D::setter();
        cout << " Enter side of square : ";
        cin >> side;
        cout << " Enter colour of square : ";
        cin >> color;
    }
    int get_side() { return side; } string get_color() { return color; }
    void area()
    {
        two_D::area();
        cout << " Area of square is : ";
        s_area = side * side;
        cout << s_area << endl;

    }
    int get_area() { return s_area; }
    void display()
    {
        cout << " SIDE of SQUARE is : " << get_side() << endl;
        cout << " COLOUR of SQUARE is : " << get_color() << endl;
        cout << " AREA of SQUARE is : " << get_area() << endl;
    }
    ~square(){}
};


//   2nd derived class

class three_D :public shape       // 0.2
{
public:
    /* void setter()
     {
         shape::setter();
     }*/
    virtual void setter() = 0;
    virtual void area()
    {
        cout << " AREA OF 3D SHAPES " << endl;
    }
    virtual void volume()
    {
        cout << " VOLUME OF 3D SHAPES " << endl;
    }
    virtual void display() = 0;
    ~three_D(){}
};


//    2nd   sub-derived classes
//    SHAPE->3D->CUBE


class cube :public three_D       // 0.2.1
{
protected:
    int length;
    int width;
    int height;
    int cu_area;
    int cu_vol;
public:
    cube()
    {
        length = 0;
        width = 0;
        height = 0;
        cu_area = 0;
        cu_vol = 0;
    }
    void setter()
    {
        cout << " Enter length : ";
        cin >> length;
        cout << " Enter width : ";
        cin >> width;
        cout << " Enter height : ";
        cin >> height;

    }
    int get_len() { return length; } int get_wid() { return width; } int get_height() { return height; }
    void area()
    {
        three_D::area();

        cu_area = 6 * length * length;


    }
    void volume()
    {
        three_D::volume();
        cu_vol = length * length * length;

    }
    int get_area() { return cu_area; }
    int get_vol() { return cu_vol; }
    void display()
    {
        cout << " Length of cube is : " << get_len() << endl;
        cout << " Area of cube is : " << get_area() << endl;
        cout << " Volume of cube is : " << get_vol() << endl;

    }
    ~cube(){}
};

//                              SHAPE->3D->PYRAMID
class pyramid :public three_D    // 0.2.2
{
protected:
    int height;
    int base;
    float p_area;
    int p_vol;
public:
    pyramid()
    {
        height = 0;
        base = 0;
        p_area = 0;
        p_vol = 0;
    }
    void setter()
    {

        cout << " Enter height of pyramid : ";
        cin >> height;
        cout << " Enter base of pyramid : ";
        cin >> base;
    }
    int get_height() { return height; } int get_base() { return base; }
    void area()
    {
        three_D::area();
        p_area = base * base * height;
        /*
        float slant_height = pow((((base * base) + (height * height)) / 4), (1 / 2));
        p_area = (base * base) + (2 * base * slant_height);*/

    }

    void volume()
    {
        three_D::volume();
        int base_area;
        base_area = base * base;
        p_vol = base_area * height / 3;


    }
    int get_area() { return p_area; } int get_vol() { return p_vol; }

    void display()
    {
        cout << " height of pyramid : " << get_height() << endl;
        cout << "  base of pyramid : " << get_base() << endl;
        cout << " area of pyramid : " << get_area() << endl;
        cout << " volume of pyramid : " << get_vol() << endl;
    }
    ~pyramid(){}
};



int main()
{
    cout << " \n1.\t Circle \n2.\t Square \n3. \tCube\n4. \tPyramid  " << endl;

    int choice;
    do
    {
        cout << "Enter your choice " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            shape* s;
            circle cu;
            s = &cu;
            s->setter();
            s->area();
            s->display();
            cout << endl;
            break;
        }
        case 2:
        {
            shape* s;
            square sq;
            s = &sq;
            s->setter();
            s->area();
            s->display();
            cout << endl;
            break;
        }
        case 3:
        {
            shape* s;
            pyramid p;
            s = &p;
            s->setter();
            s->area();
            p.volume();
            s->display();
            cout << endl;
            break;
        }
        case 4:
        {
            shape* s;
            cube c;
            s = &c;
            s->setter();
            s->area();
            c.volume();
            s->display();
            cout << endl;
            break;
        }
        case 5:
        {
            cout << " Exit " << endl;
            break;
        }
        default:
            cout << " Invalid Choice ! " << endl;
        }

    } while (choice != 5);







}
