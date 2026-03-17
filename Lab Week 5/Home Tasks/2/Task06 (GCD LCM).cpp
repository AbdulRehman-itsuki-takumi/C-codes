#include<iostream>
using namespace std;
main()
{
    cout<<"Enter The First Number : ";
    int num1;
    cin>>num1;
    
    cout<<"Enter The Second Number : ";
    int num2;
    cin>>num2;
    
    int a = num1;
    int b = num2;
    int gcd;

    for(int i = 1; i <= a; i = i + 1)
    {
        if(a % i == 0)
        {
            if(b % i == 0)
            {
                gcd = i;
            }
        }
    }
    
    int lcm = (a * b) / gcd;

    cout<<"GCD Of "<<num1<<" And "<<num2<<" Is : "<<gcd<<endl;
    cout<<"LCM Of "<<num1<<" And "<<num2<<" Is : "<<lcm<<endl; 
    
}
