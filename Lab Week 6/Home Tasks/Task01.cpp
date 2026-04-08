#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int sum = 0;

    cout<<"Enter Number Of Elements : ";
    cin>>i;

    int array[i];

    cout<<"Enter "<<i<<" Numbers Below"<<endl;
    for (int idx = 0; idx < i; idx++)
    {
        cin>>array[idx];
        sum += array[idx];
    }
    cout<<"Sum Of All Elements : "<<sum;

}