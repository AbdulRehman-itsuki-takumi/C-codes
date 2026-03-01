#include<iostream>
using namespace std;
int main(){

cout<<"Enter The Number Of Population : ";
int populationRightNow;
cin>>populationRightNow;

cout<<"Enter The Number Of Birth Rate (Births per Month) : ";
int BirthPerMonth;
cin>>BirthPerMonth;

int decadesInMonths;
decadesInMonths = (3 * 10) * 12;

int populationInFuture;
populationInFuture = populationRightNow + (BirthPerMonth * decadesInMonths);

cout<<"Population In 3 Decades Will Be : "<<populationInFuture<<" People.";

}