#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter Lilly's Age : ";
    int age;
    cin>>age;

    cout<<"Enter The Price Of Washing Machine : ";
    int machinePrice;
    cin>>machinePrice;

    cout<<"Enter The Unit Price Of Each Toy : ";
    int toyPrice;
    cin>>toyPrice;

    int totalMoney = 0;
    int toys = 0;
    int evenMoney = 10;

    for(int i = 1; i <= age; i++)
    {
        if(i % 2 == 0)   // even birthday
        {
            totalMoney = totalMoney + evenMoney - 1; // brother takes 1 So Minus 1
            evenMoney = evenMoney + 10;
        }
        else   // odd birthday
        {
            toys++;
        }
    }

    totalMoney = totalMoney + (toys * toyPrice);

    if(totalMoney >= machinePrice)
    {
        cout<<"Yes! \nRemaining Money Will Be : "<<totalMoney - machinePrice;
    }
    else
    {
        cout<<"No! \nRequired Money Will Be : "<<machinePrice - totalMoney;
    }

}