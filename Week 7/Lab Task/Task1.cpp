#include<iostream>
using namespace std;
int add(int a,int b)
{
return a+b;
}
int main()
{
 int n1,n2;
 cout<<"enter your first number :";
 cin>>n1;
 cout<<"enter your second  number :";
 cin>>n2;
 int sum=add(n1,n2);
 cout<<sum;
 return 0;
}