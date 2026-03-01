#include<iostream>
using namespace std;
int main(){

cout<<"Enter 2 Pointers : ";
int pointer2;
cin>>pointer2;

cout<<"Enter 3 Pointers : ";
int pointer3;
cin>>pointer3;

int pointerNo2;
pointerNo2 = pointer2 * 2;

int pointerNo3;
pointerNo3 = pointer3 * 3;

int TotalPoints;
TotalPoints = pointerNo2 + pointerNo3;

cout<<"Total Points Are : "<<TotalPoints;

}