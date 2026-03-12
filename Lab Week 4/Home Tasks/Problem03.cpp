#include<iostream>
using namespace std;
main()
{
    cout<<"Enter The Temperature Of City 1 : ";
    float temp1;
    cin>>temp1;

    cout<<"Enter The Temperature Of City 2 : ";
    float temp2;
    cin>>temp2;   
    
    float differnce;
    differnce = temp1 - temp2;

    if(differnce <0)
     {
        differnce = differnce * (-1);
     }

    if(differnce > 10)
     {
        cout<<"Temperature Difference Is Too Big.";
     }
    
    
}
