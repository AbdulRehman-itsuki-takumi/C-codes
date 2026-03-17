#include<iostream>
using namespace std;
main()
{
    cout<<"Enter The Number : ";
    int num;
    cin>>num;

    int ans;

    for(int i = 1; i <= 10; i = i + 1)
    {
        ans = num * i;
        cout<<num<<" * "<<i<<" = "<<ans<<endl;
    }
    
}