#include <iostream>
using namespace std;

void modifyWithPointer(int *p) 
{
    *p = 50;
}

void modifyWithReference(int &r) 
{
    r = 100;
}

main() 
{
    int a = 10;
    int b = 20;

    cout<<"Original Value Of 'a' Before Pointer Modification : "<<a<<endl;
    cout<<"Original Value Of 'a' Before Pointer Modification : "<<b<<endl;

    modifyWithPointer(&a);
    modifyWithReference(b);
    
    cout<<endl;
    cout << "Value Of 'a' After Pointer Modification : " << a << endl;
    cout << "Value Of 'b' After Reference Modification : " << b << endl;
}
