#include<iostream>
using namespace std;
int main()
{
    int option;

    for(int i = 1; i <= 100; i++)
    {
        cout<<"\n---- RESTAURANT MANAGEMENT SYSTEM ----\n";
        cout<<"1. View Food Menu\n";
        cout<<"2. Place Order\n";
        cout<<"3. View Order Status\n";
        cout<<"4. Generate Bill\n";
        cout<<"5. Contact Staff\n";
        cout<<"6. Exit\n";
        cout<<"Select Option : ";
        cin>>option;
        cout<<endl;

        if(option == 1)
        {
            cout<<"You Selected Option 1. View Food Menu"<<endl;
        }
        else if(option == 2)
        {   
            cout<<"You Selected Option 2. Place Order"<<endl;
        }
        else if(option == 3)
        {
            cout<<"You Selected Option 3. View Order Status"<<endl;
        }
        else if(option == 4)
        {
            cout<<"You Selected Option 4. Generate Challan"<<endl;
        }
        else if(option == 5)
        {   
            cout<<"You Selected Option 5. Contact Staff"<<endl;
        }
        else if(option == 6)
        {
            cout<<"You Selected Option 6. Exit"<<endl;
            cout<<"Exiting Restaurant Management System\nThank You For Your Service"<<endl; 
            break;
        }
        else
        {
            cout<<"Invalid Option"<<endl;
        }
    }
}