#include<iostream>
using namespace std;
main()
{
   cout<<"Enter The Number : ";
   int num;
   cin>>num;

   cout<<"Enter The Digit : ";
   int digit;
   cin>>digit;

   int count = 0;
   int a = num;

   for(;a != 0; a = a / 10)
   {
   int lastnum = a % 10;
   
   if(lastnum == digit)
     {
      count = count + 1;   
     }
   }
    cout<<"Frequency Of "<<digit<<" In The Number "<<num<<" Is : "<<count;
}