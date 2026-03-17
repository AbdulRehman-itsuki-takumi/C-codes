#include<iostream>
using namespace std;
int main()
{
    float num1;
    float num2;
    int option;

    for(int i = 1; i <= 100; i++)
    {
        cout<<"\n---- SIMPLE CALCULATOR APP ----\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtaction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Clear Screen\n";
        cout<<"6. Exit\n";
        cout<<"Select An Option : ";
        cin>>option;
        cout<<endl;

        if(option == 1)
        {   
            cout<<"Great Let's Perform Addition On Numbers"<<endl;
            cout<<"Enter First Number : ";
            cin>>num1;
            cout<<"Enter Second Number : ";
            cin>>num2;
            int add = num1 + num2;
            cout<<"The Result By Adding "<<num1<<" And "<<num2<<" Is : "<<add<<endl;
        }
        else if(option == 2)
        {   
            cout<<"Great Let's Perform Subtraction On Numbers"<<endl;
            cout<<"Enter First Number : ";
            cin>>num1;
            cout<<"Enter Second Number : ";
            cin>>num2;
            int sub = num1 - num2;
            cout<<"The Result By Subtracting "<<num1<<" And "<<num2<<" Is : "<<sub<<endl;
        }
        else if(option == 3)
        {
            cout<<"Great Let's Perform Multiplication On Numbers"<<endl;
            cout<<"Enter First Number : ";
            cin>>num1;
            cout<<"Enter Second Number : ";
            cin>>num2;
            int multiply = num1 * num2;
            cout<<"The Result By Adding "<<num1<<" And "<<num2<<" Is : "<<multiply<<endl;
        }
        else if(option == 4)
        {
            cout<<"Great Let's Perform Division On Numbers"<<endl;
            cout<<"Enter First Number : ";
            cin>>num1;
            cout<<"Enter Second Number : ";
            cin>>num2;
            int divide = num1 / num2;
            cout<<"The Result By Adding "<<num1<<" And "<<num2<<" Is : "<<divide<<endl;
        }
        else if(option == 5)
        {   
            cout<<"Clearing Screen"<<endl;
        }
        else if(option == 6)
        {
            cout<<"Exiting Simple Calculator App\nThank You For Using GoodBye!"<<endl; 
            break;
        }
        else
        {
            cout<<"Invalid Option"<<endl;
        }
    }
}