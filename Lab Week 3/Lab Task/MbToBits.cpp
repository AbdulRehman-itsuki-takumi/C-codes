#include<iostream>
using namespace std;

main(){

cout<<"Enter The Size In MegaBytes :";
float mb;
cin>>mb;

float kb;
kb = mb * 1024;

float bytes;
bytes = kb * 1024;

float bits;
bits = bytes * 8;

cout<<"The Value Of "<<mb<<" MB in Bits is : "<<bits;



}