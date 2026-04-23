#include<iostream>
using namespace std;

int add(int a,int b);

main()
{

int n1,n2;

cout<<"Enter Your First Number : ";
cin>>n1;
cout<<"Enter Your Second Number : ";
cin>>n2;

int sum = add(n1,n2);
cout<<sum;

}

int add(int a,int b)
{

return a + b;

}