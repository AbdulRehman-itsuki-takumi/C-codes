#include<iostream>
using namespace std;
int main(){

cout<<"Enter The Name Of The Patient : ";
string name;
cin>>name;

cout<<"Enter The Weight Loss Target In Kgs : ";
int weightTarget;
cin>>weightTarget;

int AvgWeightLossInDays = 15;

int days;
days = weightTarget * AvgWeightLossInDays;

cout<<name<<" Will Need "<<days<<" Days To Lose "<<weightTarget<<" Kgs Weight By Following The Doctor's Suggestions.";

}