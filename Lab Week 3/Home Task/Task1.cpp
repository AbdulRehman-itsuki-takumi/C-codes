#include<iostream>
using namespace std;
int main(){

cout<<"Enter The Sides Of Polygon (Can't Be Less Than 3) : ";
int n;
cin>>n;

int angles;
angles = (n - 2) * 180;

cout<<"The Sum Of Polygon Internal Angles Of A "<<n<<"-Sided Polygon Is : "<<angles<<" degrees";

}