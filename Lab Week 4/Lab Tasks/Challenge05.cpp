#include<iostream>
using namespace std;
main()
{

cout<<"Enter The Name Of First Brother : ";
string name1;
cin>>name1;
cout<<"Enter The Age Of First Brother : ";
int age1;
cin>>age1;

cout<<"Enter The Name Of Second Brother : ";
string name2;
cin>>name2;
cout<<"Enter The Age Of Second Brother : ";
int age2;
cin>>age2;

cout<<"Enter The Name Of Third Brother : ";
string name3;
cin>>name3;
cout<<"Enter The Age Of Third Brother : ";
int age3;
cin>>age3;

cout<<name1<<"'s Age Is "<<age1<<endl;
cout<<name2<<"'s Age Is "<<age2<<endl;
cout<<name3<<"'s Age Is "<<age3<<endl;

if(age1 < age2)
{
    if(age1 < age3)
    {
        cout<<name1<<" Is The Youngest Brother With Age "<<age1;
    }
    else
    {
        cout<<name3<<" Is The Youngest Brother With Age "<<age3;
    } 
}
else 
{
    if(age2 > age3)
    {
        cout<<name3<<" Is The Youngest Brother With Age "<<age3;
    }
    else
    {
        cout<<name2<<" Is The Youngest Brother With Age "<<age2;
    }
}

}