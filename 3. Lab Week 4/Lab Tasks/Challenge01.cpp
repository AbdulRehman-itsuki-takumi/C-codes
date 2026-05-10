#include<iostream>
using namespace std;
main(){

cout<<"Enter Your Bill Amount : ";
int billAmount;
cin>>billAmount;

int discount;

if(billAmount < 5000)
{
   discount = billAmount * 5/100;
}
else
{
   discount = billAmount * 10/100;
}

int BillAfterDiscount = billAmount - discount;

cout<<"Your Discounted Bill Amount Is : "<<BillAfterDiscount<<"Rs";

}