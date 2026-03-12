#include<iostream>
using namespace std;
main()
{
  cout<<"Enter You Speed : ";
  int speed;
  cin>>speed;

  if(speed < 10)
{
    cout<<"Slow";
}
  if(speed < 50)
{
    cout<<"Average";
}
  if(speed < 150)
{
    cout<<"Fast";
}
  if(speed < 1000)
{
    cout<<"Ultra Fast";
}
  if(speed > 1000)
{
    cout<<"Extremely Fast";
}

}