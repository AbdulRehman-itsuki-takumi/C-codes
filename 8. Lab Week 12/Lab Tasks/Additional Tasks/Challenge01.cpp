#include<iostream>
using namespace std;

void swapValue(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

main()
{
    int x = 10;
    int y = 20;

    cout<<"Original Value Of x : "<<x<<endl;
    cout<<"Original Value Of y : "<<y<<endl;

    swapValue(&x, &y);

    cout<<"Swapped Value Of x : "<<x<<endl;
    cout<<"Swapped Value Of y : "<<y<<endl;

    

}