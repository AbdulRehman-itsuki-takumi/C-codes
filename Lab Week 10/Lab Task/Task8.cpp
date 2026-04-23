#include<iostream>

using namespace std;
int myFunction(int num1);
main()
{
    int num1;
    cout<<" Enter A Number : ";
    cin>>num1;

   int result = myFunction(num1);
    return 0;
}
int myFunction(int num1)
{
    int total;
    total = num1 * 5;
    cout<<" The Result Is : " << total;
    return total;

}
   