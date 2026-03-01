#include<iostream>
using namespace std;
main()
{
cout<<"Enter 1st Number : ";
int num1;
cin>>num1;

cout<<"Enter 2nd Number : ";
int num2;
cin>>num2;  

cout<<"Enter 3rd Number : ";
int num3;
cin>>num3;  

cout<<"Enter 4th Number : ";
int num4;
cin>>num4;
      
cout<<"Enter 5th Number : ";
int num5;
cin>>num5;

cout<<"Enter 6th Number : ";
int num6;
cin>>num6;

cout<<"Enter 7th Number : ";
int num7;
cin>>num7;  

cout<<"Enter 8th Number : ";
int num8;
cin>>num8;  

cout<<"Enter 9th Number : ";
int num9;
cin>>num9;
      
cout<<"Enter 10th Number : ";
int num10;
cin>>num10;
     
cout<<"Enter 11th Number : ";
int num11;
cin>>num11;

cout<<"Enter 12th Number : ";
int num12;
cin>>num12;  

cout<<"Enter 13th Number : ";
int num13;
cin>>num13;  

cout<<"Enter 14th Number : ";
int num14;
cin>>num14;
      
cout<<"Enter 15th Number : ";
int num15;
cin>>num15;

int FirstFiveAdd;
FirstFiveAdd = num1 + num2 + num3 + num4 + num5;

int MidFiveMultiply;
MidFiveMultiply = num6 * num7 * num8 * num9 * num10;

int LastFiveSubtract;
LastFiveSubtract = num11 - num12 - num13 - num14 - num15;

int Addition;
Addition = FirstFiveAdd + MidFiveMultiply;

int FinalResult;
FinalResult = Addition - LastFiveSubtract;

cout<<"The Final Result Is : "<<FinalResult;

}