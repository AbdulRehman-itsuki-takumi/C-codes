#include<iostream>
using namespace std;
main()
{
    int count = 5;
    int num[count];

    for(int i = 0; i < count; i++)
    {
        cout<<"Enter Numbers : ";
        cin>>num[i];
    }

    cout<<"The 1st Element In Array Is : "<<num[0]<<endl;
    cout<<"The 2nd Element In Array Is : "<<num[4]<<endl;
    
}
