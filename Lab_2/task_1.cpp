//Write a c++ program to check if a given integer is power of 2 using Bitwise Operators and macro

#include <iostream>
using namespace std;
#define Input(x) cout << " Enter number to check : ";cin >> x


#define check_power(x) ((x & x-1)==0?cout<<" yeah can be in power of 2 :D ":cout<<" Nai bro num hi galat dala h tum ny -_- ")
int main()
{
	int x;
	
   Input(x);
   check_power(x);
}

