#include<iostream>
using namespace std;
main()
{
    cout<<"Enter A Number : ";
    int num;
    cin>>num;

    int sum = 0;

    for(;num != 0; num = num / 10)
    {
        int lastnum;
        lastnum = num % 10;
        sum = sum + lastnum;
    }

    cout<<"Sum Of Numbers Is : "<<sum;
}
