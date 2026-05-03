#include<iostream>
using namespace std;
int main(){

cout<<"Enter Initial Velocity (m/s) : ";
int Vi;
cin>>Vi;

cout<<"Enter Acceleration (m/s^2) : ";
int a;
cin>>a;

cout<<"Enter Time (s) : ";
int time;
cin>>time;

int Vf;
Vf = Vi + (time * a);

cout<<"Final Velocity (m/s) is : "<<Vf<<" m/s";

}