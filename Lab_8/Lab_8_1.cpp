

// ConsoleApplication85.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class bank_account
{
protected:
    int acc_num;
    double balance;
public:
    bank_account()
    {
        acc_num = 0;
        balance = 0.0;

    }
    void setter()
    {
        cout << " Enter account number : " << endl;
        cin >> acc_num;
        cout << " Enter initial balance : " << endl;
        cin >> balance;
    }

    int get_acc() { return acc_num;}
    void withdraw(int money)
    {
        cout << " Enter the amount you want to withdraw : ";
        cin >> money;
        balance = balance - money;
    }
    void money()
    {
        int money=0; char option;
        cout << " if you want to deposit money enter 'd' else enter 'w' to withdraw money : ";
        cin >> option;
        if (option == 'd')
        {
            cout << " Enter the amount you want to deposit : ";
            cin >> money;
            balance = balance + money;
        }
        else if (option == 'w')
        {
            withdraw(money);
        }
        else
            cout << " invalid option" << endl;

    }
    double get_bal() { return balance; }

    void display()
    {
        cout << "\n Account number : " << acc_num << endl;
        cout << " New balance : " << balance << endl;

    }
    ~bank_account(){}
};
class checking_account : public bank_account
{
protected:
    int min_balance;
    float intrest;
    int service_charges;
    int intrest_rate;
    //int post_intrest;
public:
    checking_account()
    {
        min_balance = 0;
        intrest_rate = 0;
        service_charges = 0;

    }
    void setter()
    {
        bank_account::setter();
        cout << " \nEnter the minimum balance : ";
        cin >> min_balance;
        cout << " \nEnter intrest rate : ";
        cin >> intrest;

        cout << " \nEnter service charges : ";
        cin >> service_charges;



    }
    int get_min_bal() { return min_balance; }
    float get_int_rt() { return intrest; }
    int get_sChrg() { return service_charges; }
    void post_intrest() 
    {

        intrest_rate = balance * intrest;
        cout << " Balance after intrest deduction is : ";
        balance=get_bal() - intrest_rate;
        cout << balance << endl;
        
    }


    void money()
    {
        bank_account::money();
        post_intrest();
        if (get_bal() < min_balance)
        {

            cout << "\nAs the balance is less than minimum balance, service charges will be deducted from from your current balance\n" << endl;
            char option;
            cout << " enter 'w' to withdraw money : ";
            cin >> option;

            if (option == 'w')
            {
               bank_account:: withdraw(service_charges);
              

                cout << " After paying services charges balance will be : " << balance << endl;
            }
            else
                cout << " Invalid option!" << endl;

        }
        else
            cout << " Balance is not less than minimum balance : " << balance << endl;


    }
    void display()
    {
        bank_account::display();
    }



    ~checking_account(){}

};
class saving_account :public bank_account, checking_account
{
public:
    saving_account() {}
    void setter()
    {
        checking_account::setter();
    }
    void money()
    {
        checking_account::money();

    }
    void display()
    {
        checking_account::display();
    }
    ~saving_account(){}
};

int main()
{
    saving_account s;
    s.setter();
    s.money();
    s.display();
}