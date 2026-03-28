#include<iostream>
using namespace std;

int main()
{
    int coins[4];
    double due;

    cout << "Enter number of quarters: ";cin>>coins[0];
    cout << "Enter number of dimes: ";cin>>coins[1];
    cout << "Enter number of nickels: ";cin>>coins[2];
    cout << "Enter number of pennies: ";cin>>coins[3];

    cout << "Enter total due (in dollars): ";
    cin >> due;

    int totalCents = coins[0]*25 + coins[1]*10 + coins[2]*5 + coins[3];
    int dueCents = due * 100;

    if(totalCents >= dueCents)
        cout << "Can you pay the amount?YES!";
    else
        cout << "Can you pay the amount? NO!";

}