#include<iostream>
using namespace std;
int main(){

cout<<"Enter Paint Area (in sqm) : ";
int paintarea;
cin>>paintarea;

cout<<"Enter The Width Of The Wall : ";
int width;
cin>>width;

cout<<"Enter The Height Of The Wall : ";
int height;
cin>>height;

int NumOfWalls;
NumOfWalls =  paintarea / (width * height);

cout<<"The Number Of Walls You Can Paint is : "<<NumOfWalls<<" Walls";

}