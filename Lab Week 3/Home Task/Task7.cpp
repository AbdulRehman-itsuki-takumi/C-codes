#include<iostream>
using namespace std;
main()
{
cout<<"Enter The Movie Name : ";
string movie;
cin>>movie;

cout<<"Enter The Adult Ticket Price : ";
int adultTicket;
cin>>adultTicket;  

cout<<"Enter The Child Ticket Price : ";
int childTicket;
cin>>childTicket;  

cout<<"Enter The Number Of Adult Tickets Sold : ";
int adultTicketSold;
cin>>adultTicketSold;    
  
cout<<"Enter The Number Of Child Tickets Sold : ";
int childTicketSold;
cin>>childTicketSold;      

cout<<"Enter The Percentage Of Amount To Be Donated To Charity : ";
int charity;
cin>>charity; 

int totalSales;
totalSales = adultTicket * adultTicketSold + childTicket * childTicketSold;

int donation;
donation = charity * totalSales / 100;

int remaining;
remaining = totalSales - donation;


cout<<"---------------------------------------------------------------\n";
cout<<"\tMovie : "<<movie<<endl;
cout<<"\tTotal Amount Generated From Ticket Sales : "<<totalSales<<"$\n";
cout<<"\tDonation To Charity("<<charity<<"%) : "<<donation<<"$\n";
cout<<"\tRemaining Amount After Donation : " <<remaining<<"$"; 

}