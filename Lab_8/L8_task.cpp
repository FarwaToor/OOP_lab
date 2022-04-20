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

           /*void display()
           {
               cout << "\n Account number : ";
               cout << acc_num<<endl;
               cout << "Initial balance : ";
               cout << balance << endl;
           }*/

           void money()
           {
               int money; char option;
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
                   cout << " Enter the amount you want to deposit : ";
                   cin >> money;
                   balance = balance - money;
               }
               else
                   cout <<" invalid option" << endl;

           }

           void getter()
           {
               cout << "\n Account number : " << acc_num << endl;
               cout << " New balance : " << balance<<endl;

           }

};
class checking_account : public bank_account
{
    protected:
        int min_balance;
        float intrest_rate;
        int service_charges;
        //int post_intrest;
    public:
        checking_account()
        {
            min_balance=0;
            intrest_rate = 0;


        }
        void setter()
        {
            bank_account::setter();
            cout << " \nEnter the minimum balance : ";
            cin >> min_balance;
            cout << " \nEnter intrest rate : ";
            cin >> intrest_rate;
          
            balance = balance * intrest_rate;
            cout << " Balance after intrest is : " << balance << endl;




        }
      

        void money()
        {
            bank_account::money();
            if (balance < min_balance)
            {

                cout << "\nAs the balance is less than minimum balance specific amount of service charges will be deducted from from your current balance\n" << endl;
                char option;
                cout << " enter 'w' to withdraw money : ";
                cin >> option;
               
                 if (option == 'w')
                {cout<<"Enter the service charges to deduct : ";
                    cin >> service_charges;
                    balance = balance - service_charges;
                    cout << " After paying services charges balance will be : " <<balance<< endl;
                }
                else
                    cout << " invalid option" << endl;

            }
            else
                cout <<" baalnce is not less than minimum balance : "<< balance << endl;
 

        }
        void getter()
        {
            bank_account::getter();
            cout << " Account number : " << acc_num<<endl;
            cout << " Current balanca : " << balance << endl;
        }


       
    

};
class saving_account:public bank_account,checking_account
{
public:
    saving_account(){}
    void setter() 
    {
        checking_account::setter();
    }
    void money() 
    {
        checking_account::money();

    }
    void getter() 
    {
        checking_account::getter();
    }
};

int main()
{
    saving_account s;
    s.setter();
    s.money();
    s.getter();
}

