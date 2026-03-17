#include<iostream>
using namespace std;
int main()
{
    string username;
    string password;
    string studentName;
    string courseName;
    int choice;
    int studentAge = 0;

    for(int i = 1; i <= 3; i++)
    {
        cout<<"Enter Username : ";
        cin>>username;

        cout<<"Enter Password : ";
        cin>>password;

        if(username == "admin" && password == "1234")
        {
            cout<<"Login Successful"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong Login"<<endl;
        }
        if(i == 3 && !(username == "admin" && password == "1234"))
        {
            cout<<"Too many attempts"<<endl;
            return 0;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        cout<<"\n---- University Management System ----\n";
        cout<<"1. Add Student\n";
        cout<<"2. View Student\n";
        cout<<"3. Add Course\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice : ";
        cin>>choice;

        if(choice == 1)
        {
            cout<<"Enter Student Name : ";
            cin>> studentName;
            cout<<"Enter Student Age : ";
            cin>> studentAge;
            cout<<"Student Added Successfully"<<endl;
        }
        else if(choice == 2)
         {   
            if(studentName != "")
            {
                cout<<"Student Name : "<<studentName<<endl;
                cout<<"Student Age : "<<studentAge<<endl;
            }
            else
            {
                cout<<"No Student Record Found"<<endl;
            }
        }
        else if(choice == 3)
        {
            cout<<"Enter Course Name : ";
            cin>> courseName;
            cout<<"Course Added : "<<courseName<<endl;
        }
        else if(choice == 4)
        {
            cout<<"Program Exit"<<endl;
            break;
        }
        else
        {   
            cout<<"Invalid Choice"<<endl;
        }
    }
}