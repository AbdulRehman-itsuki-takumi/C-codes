#include<iostream>
using namespace std;
main(){

cout<<"Enter The Size Of Bag In Pounds : ";
int size;
cin>>size;

cout<<"Enter The Cost Of Bag : $";
float cost;
cin>>cost;  

cout<<"Enter The Area In Square Feet That Can Be Covered By The Bag : ";
float area;
cin>>area;      

float PerPoundCost;
PerPoundCost = cost / size;

float PerSquarefootCost;
PerSquarefootCost = cost / area;

cout<<"The Cost Of Fertilizer Per Pound:"<<PerPoundCost<<"$\n";
cout<<"The Cost Of Fertilizing Per Square Foot:"<<PerSquarefootCost<<"$";

}