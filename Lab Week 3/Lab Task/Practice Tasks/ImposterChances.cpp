#include<iostream>
using namespace std;
int main(){

cout<<"Enter The Number Of Imposters (3 max limit) : ";
float imposters;
cin>>imposters;

cout<<"Enter The Number Of Players (10 max limit) : ";
int players;
cin>>players;

float chance;
chance = 100 * (imposters / players);

cout<<"The Chances Of Being An Imposter is : "<<chance<<" %";

}