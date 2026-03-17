#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter The Amount Of Money : ";
    float money;
    cin>>money;

    cout<<"Enter The Year : ";
    int year;
    cin>>year;

    float totalSpent = 0;

    for(int y = 1800; y <= year; y++)
    {
        int age = 18 + (y - 1800);

        if(y % 2 == 0)
        {
            totalSpent = totalSpent + 12000;
        }
        else
        {
            totalSpent = totalSpent + 12000 + (50 * age);
        }
    }

    if(money >= totalSpent)
    {
        cout<<"Yes! He Will Live A Carefree Life And Will Have ";
        cout<< money - totalSpent <<" Dollars Left.";
    }
    else
    {
        cout<<"He Will Need "; 
        cout<< totalSpent - money <<" Dollars To Survive.";
    }

}