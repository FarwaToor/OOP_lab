//Define a macro that acts as a function which solves the following using bitwise operator
//                      num1*2^num2

#include <iostream>
using namespace std;
#define power(num1,num2)(num1<<num2)
int main()
{
    int num1, num2;
    cout << " Enter 1st number : ";
    cin >> num1;
    cout << " Enter 2nd number : ";
    cin >> num2;
    cout<<power(num1, num2);
}

