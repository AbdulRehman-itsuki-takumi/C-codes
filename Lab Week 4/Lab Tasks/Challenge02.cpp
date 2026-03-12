#include<iostream>
using namespace std;
main(){
   
cout<<"Ali's Salary Per Month Is : ";
float salaryPerMonth;
cin>>salaryPerMonth;

cout<<"Laptop Price Is : ";
float laptopPrice;
cin>>laptopPrice;

cout<<"Advance Salary For How Many Months : ";
float Months;
cin>>Months;

float advanceSalary = salaryPerMonth * 0.5 * Months;
cout<<"\nYour Advance Salary Is "<<advanceSalary<<"Rs\n"; 

if(advanceSalary >= laptopPrice)
{
   cout<<"You Can Buy The Laptop With This Advanced Salary";
}
else
{
   cout<<"You Can't Buy The Laptop With This Advanced Salary\n";
   float waitingMonths = laptopPrice / (salaryPerMonth * 0.5);
   cout<<"You Have To Wait For "<<waitingMonths<<" Months To Buy The Laptop.";
}

}