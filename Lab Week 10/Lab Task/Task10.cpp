#include<iostream>
using namespace std;
main()
{
    bool isSymmetrical(int num1);
    int num1;

   cout<<" Enter A Three Digit Number : ";
    cin>>num1;
   bool ans = isSymmetrical(num1);
}
bool isSymmetrical(int num1) 
{
    
    int firstDigit = num1 / 100; 
    int lastDigit = num1 % 10;   
    bool result;

    if(firstDigit == lastDigit) 
    {
        result = true;
    } 
    else 
    {
        result = false;
    }

    if(result) 
    {
        cout << "The Number Is Symmetrical." << endl;
    } 
    else 
    {
        cout << "The Number Is Not Symmetrical." << endl;
    }

    return result;
}