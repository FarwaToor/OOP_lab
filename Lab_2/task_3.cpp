//Write a program to make a number system adder i-e a program should add two numbers of same base . 
//For example if user selects base two then the program should be able to add two binary numbers. -_-

#include <iostream>
#include<bitset>
using namespace std;


void binary()
{
    int n1, n2;
    cout << " Enter first number in terms of 0's and 1's  : ";//if(x=0||x=1)  output : error  (101) 1+1 / 0+1

    cin >> n1;
    cout << "\n Enter second number in terms of 0's and 1's : ";
    cin >> n2;
    int sum;
    cout << " Let's add both binary numbers : "<<endl<<" n1 + n2 = ";
    sum = n1 + n2;
    cout << bitset<8>(int(sum)) << endl;




}

void octal()
{
    int n1, n2; int rem; int num = 0; int i = 1;
    cout << " Enter first number in terms of 1 to 7 : ";
    cin >> n1;
    cout << " Enter second number in terms of 1 to 7 : ";
    cin >> n2;
    int sum;
    cout << " Let's add both octal numbers : " << endl << " n1 + n2 = ";
    sum = n1 + n2;
    int temp = sum;
    while (temp != 0) 
    {
        rem = temp % 8;
        num = num + i * rem;
        i = i * 10;
        temp = temp / 8;

    }
    cout << num << endl;

}
void decimal() 
{
    int n1, n2;
    cout << " Enter first number in terms of 1 to 9  : ";
    cin >> n1;
    cout << "\n Enter second number in terms of 1 to 9 : ";
    cin >> n2;
    int sum;
    cout << " Let's add both binary numbers : " << endl << " n1 + n2 = ";
    sum = n1 + n2;
    cout << sum<<endl;
}

void hexa()
{
    int n1, n2; int sum, rem, num = 0; int i = 1, j; char hex[50];
    cout << " Enter first number in terms of hexadecimal : ";
    cin >> n1;
    cout << " Enter second number in terms of hexadecimal : ";
    cin >> n2;
    cout << " Let's add both octal numbers : " << endl << " n1 + n2 = ";
    sum = n1 + n2;
    int temp = sum;
    while (temp != 0)
    {
        rem = temp % 16;
        if (rem < 10)
        {
            hex[i++] = rem + 48;
        }
        else
            hex[i++] = rem + 55;
        temp = temp / 16;
    }
    for (int j = i-1; j >= 0; j--) 
    {
        cout << hex[j];
    }
    cout << endl;

}


int main()
{
    int choice;
    do 
    {
        cout << " Enter your choice : ";
        cin >> choice;
        switch (choice) 
        {
        case 1:
            binary();
            //binary adder
            break;
        case 2:
            octal();
            //octal adder
            break;
        case 3:
            decimal();
            //decimal adder
        case 4:
            hexa();
            //hexa adder
            break;
        case 5:
            cout << "Exit" << endl;
            break;
        default:
            cout << " Invalid choice ! " << endl;

        }


    } while(choice!=5);
}

