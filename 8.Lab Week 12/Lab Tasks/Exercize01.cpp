#include <iostream>
using namespace std;

main() 
{
    int x = 10;
    int *ptr = &x;

    cout << "Value of x : " << x << endl; // value stored in x that is 10
    cout << "Address of x : " << &x << endl; // memory of that variable because its &x
    cout << "Value at pointer ptr : " << *ptr << endl; // value at that address that is 10
}
