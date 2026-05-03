#include<iostream>
using namespace std;
int main(){

cout<<"Enter Your Age (in Years) : ";
int age;
cin>>age;

cout<<"Enter The Number Of Moves  : ";
int moves;
cin>>moves;

int avgYears;
avgYears =  age / (moves + 1);

cout<<"The Average Number Of Years Spent In House is : "<<avgYears<<" Years";

}