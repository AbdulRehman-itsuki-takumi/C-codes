#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float base,exp;
    cout<<"Enter The Base number : ";
    cin>>base;
    cout<<"Enter The Exponent : ";
    cin>>exp;
    cout<<base<<" Raised To The Power "<<exp<<" Is : "<<pow(base,exp); 
}