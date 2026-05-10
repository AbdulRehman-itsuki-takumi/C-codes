#include<iostream>
using namespace std;
int main()
{
    string password;
    int option;
    float balance = 0;
    float deposit = 0;
    float totalBalanceAfterDeposit = 0;
    float withdraw = 0;

    for(int i = 1; i <= 3; i++)
    {
        cout<<"Enter Password : ";
        cin>>password;

        if(password == "1234")
        {
            cout<<"Login Successful"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong Login"<<endl;
        }
        if(i == 3 && !(password == "1234"))
        {
            cout<<"Too Many Wrong Attempts"<<endl;
            return 0;
        }
    }
    for(int i = 1; i <= 100; i++)
    {
        cout<<"\n---- ATM MENU ----\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Select Option : ";
        cin>>option;

        if(option == 1)
        {
            cout<<"Your Current Balance Is : "<<balance<<endl;
        }
        else if(option == 2)
        {   
            cout<<"Enter The Amount You Want To Deposit : ";
            cin>>deposit;
            totalBalanceAfterDeposit = deposit + balance;
            balance = totalBalanceAfterDeposit;
            cout<<"Your Amount Is Deposited Successfully";
            
        }
        else if(option == 3)
        {
            cout<<"Enter The Amount You Want To Withdraw : ";
            cin>> withdraw;
            if(withdraw <= totalBalanceAfterDeposit)
            {
                 totalBalanceAfterDeposit = totalBalanceAfterDeposit - withdraw;
                 balance = totalBalanceAfterDeposit;
                cout<<"Withdraw Successfull.\nRemaining Amount In Your Account Is : "<<totalBalanceAfterDeposit<<endl;
            }
            else
            {
                cout<<"Insufficient Balance Amount"<<endl;
            }
        }
        else if(option == 4)
        {
            cout<<"Program Exit"<<endl;
            break;
        }
        else
        {   
            cout<<"Invalid Option"<<endl;
        }
    }
}