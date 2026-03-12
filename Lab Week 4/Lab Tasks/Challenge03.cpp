#include<iostream>
using namespace std;
main(){

cout<<"Enter The First Number : ";
float num1;
cin>>num1;

cout<<"Enter The Operator : ";
char op;
cin>>op;

cout<<"Enter The Second Number : ";
float num2;
cin>>num2;


if(op == '+')
{
   cout<<"Result Is "<<num1<<" - "<<num2<<" = "<<num1 - num2;
}
else if(op == '-')
{
    cout<<"Result Is "<<num1<<" + "<<num2<<" = "<<num1 + num2;
}
else if(op == '*')
{
    cout<<"Result Is "<<num1<<" / "<<num2<<" = "<<num1 / num2;
}
else if(op == '/')
{
    cout<<"Result Is "<<num1<<" * "<<num2<<" = "<<num1 * num2;
}
else
{
    cout<<"Invalid Operator.";
}

}
