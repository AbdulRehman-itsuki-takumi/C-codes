#include<iostream>
using namespace std;
main()
{
   cout<<"Enter Your Car Speed (km/h) : ";
   float carSpeed;
   cin>>carSpeed;

   if(carSpeed > 100)
   {
    cout<<"Halt!.....YOU WILL BE CHALLANED SIR!!!";
   }
   else
   {
    cout<<"Perfect....YOUR ARE GOING GOOD SIR!";
   }

}