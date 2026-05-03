#include<iostream>
using namespace std;
main(){

cout<<"Enter Vegetable Price Per Kilogram (in coins) : ";
float vegPrice;
cin>>vegPrice;

cout<<"Enter Fruit Price Per Kilogram (in coins) : ";
float fruitPrice;
cin>>fruitPrice;  

cout<<"Enter Total Kilogram Of Vegetables : ";
float WeightOfVeg;
cin>>WeightOfVeg;  

cout<<"Enter Total Kilogram Of Fruits : ";
float WeightOfFruit;
cin>>WeightOfFruit;      

float TotalEarnings;
TotalEarnings = (WeightOfVeg * vegPrice + fruitPrice * WeightOfFruit) / 1.94;

cout<<"Total Earnings In Rupees (Rs) Is : "<<TotalEarnings<<"Rs";
}