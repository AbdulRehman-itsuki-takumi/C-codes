#include<iostream>
using namespace std;
main()
{
    int a = 0;
    int b = 1;
    int next;

    cout<<"Enter The Lenght Of Fibonacci Series : ";
    int lenght;
    cin>>lenght;

    cout<<a<<", ";
    cout<<b<<", ";

    for(int i = 1; i <= lenght; i = i + 1)
    {
        next = a + b;
        cout<<next<<", ";

        a = b;
        b = next;

    }
}