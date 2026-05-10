#include<iostream>
using namespace std;
int main()
{
    int option;
    string bookName;
    string view;
    string borrow;
    string issue;


    for(int i = 1; i <= 100; i++)
    {
        cout<<"\n---- LIBRARY MANAGEMENT SYSTEM ----\n";
        cout<<"1. Add Book\n";
        cout<<"2. View Book\n";
        cout<<"3. Borrow Book\n";
        cout<<"4. Issue Book\n";
        cout<<"5. Exit\n";
        cout<<"\nSelect An Option : ";
        cin>>option;
        cout<<endl;

        if(option == 1)
        {
            cout<<"Enter Book Name : ";
            cin>>bookName;
        }
        else if(option == 2)
        {   
            cout<<"Enter The Book Name You Want To View : ";
            cin>>view;
            cout<<view<<" Book Written By Eren Yeager Is Placed In Shelf 3\nThanks"<<endl;
        }
        else if(option == 3)
        {
            cout<<"Enter The Name Of Book You Wanna Borrow : ";
            cin>>borrow;
            cout<<borrow<<" Has Been Added To Your Borrow Books List"<<endl;
        }
        else if(option == 4)
        {
            cout<<"Enter The Name Of Book You Wanna Issue : ";
            cin>>issue;
            cout<<issue<<" Has Been Added To You Issued Books List"<<endl;
        }
        else if(option == 5)
        {
            cout<<"Exiting Library Management System\nThank You For Your Visiting GoodBye!"<<endl; 
            break;
        }
        else
        {
            cout<<"Invalid Option"<<endl;
        }
    }
}