#include<iostream>
using namespace std;
main(){

cout<<"Enter A Four Digit Number : ";
int num;
cin>>num;      

int result;
result = (num % 10) + (num / 10 % 10) + (num / 100 % 10) + (num / 1000 % 10);

cout<<"Sum Of Individual Digits Is : "<<result;

}
