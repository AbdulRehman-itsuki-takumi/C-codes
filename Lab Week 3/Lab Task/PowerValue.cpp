#include<iostream>
using namespace std;

main(){

cout<<"Enter The Value Of Voltages (In Volts) : ";
float volt;
cin>>volt;

cout<<"Enter The Value Of Current (In Amperes) : ";
float current;
cin>>current;

float power;
power = volt * current;
cout<<"The Power is : "<<power<<" Watts.";


}