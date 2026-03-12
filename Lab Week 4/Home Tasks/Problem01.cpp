#include<iostream>
using namespace std;
main()
{
   cout<<"Enter The Countr's Name : ";
   string countryName;
   cin>>countryName;

   cout<<"Enter The Tickets Price In Dollars : ";
   float ticketPrice;
   cin>>ticketPrice;
    
   float TotalPriceAfterDiscount;
   float discount;

   if(countryName == "Ireland")
   {
      discount = ticketPrice * 10 / 100;
      TotalPriceAfterDiscount = ticketPrice - discount;
      cout<<"-----------Ticket Price Info------------\n";
      cout<<"Country Name : "<<countryName<<endl;
      cout<<"Ticket Price : "<<ticketPrice<<"$\n";
      cout<<"Ticket Price After Discount : "<<TotalPriceAfterDiscount<<"$\n";   
      cout<<"----------------------------------------";
   }
   else
   {
      discount = ticketPrice * 5 / 100;
      TotalPriceAfterDiscount = ticketPrice - discount;
      cout<<"-----------Ticket Price Info------------\n";
      cout<<"Country Name : "<<countryName<<endl;
      cout<<"Ticket Price : "<<ticketPrice<<"$\n";
      cout<<"Ticket Price After Discount : "<<TotalPriceAfterDiscount<<"$\n";
      cout<<"----------------------------------------";
   }


}