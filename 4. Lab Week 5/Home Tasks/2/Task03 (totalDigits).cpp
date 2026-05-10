#include<iostream>
using namespace std;
main()
{
  cout<<"Enter A Number : ";
  int num;
  cin>>num;

  int count = 0;

  if(num < 0)
  {
    num = -num;
  }
  if(num == 0)
  {
    cout<<"1";
  }
  else
   {
     while(num != 0)
     {
        num = num / 10;
        count = count + 1; 
     }
  

     cout<<count;
   }

}