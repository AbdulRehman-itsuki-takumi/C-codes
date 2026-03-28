#include<iostream>
using namespace std;
main()
{
    int sum = 0;
    float avg = 0;
    int num[5] = {1, 2, 3, 4, 5};
    for(int index = 0; index < 5; index++)
    {
        sum = sum + num[index];
    }

    avg = sum / 5;

    cout<<"Sum Of All Values Is : "<<sum<<endl;
    cout<<"Average Of All Values Is : "<<avg<<endl;
}