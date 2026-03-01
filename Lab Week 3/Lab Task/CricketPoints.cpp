#include<iostream>
using namespace std;
int main(){

cout<<"Enter The Number Of Wins : ";
int wins;
cin>>wins;

cout<<"Enter The Number Of Draws : ";
int draws;
cin>>draws;

cout<<"Enter The Number Of Losses : ";
int losses;
cin>>losses;

int points;
points = (wins * 3) + (draws * 1) + (losses * 0);

cout<<"Pakistan Has Obtained "<<points<<" points In Asia World Cup.";

}