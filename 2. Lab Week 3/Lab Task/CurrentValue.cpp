#include<iostream>
using namespace std;

main(){

cout<<"Enter The Value Of Charge (Q) : ";
float charge ;
cin>>charge;

cout<<"Enter The Value Of Time (t) : ";
float time;
cin>>time;

float Current;
Current = charge / time;
cout<<"The Current (I) Value is : "<<Current<<" Amperes";


}