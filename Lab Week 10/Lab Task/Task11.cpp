#include <iostream>
using namespace std;
main()
{
    void oddEven(int num1);
    int num1;
    cout<<" Enter a five-digit number: ";
    cin>>num1;
    oddEven(num1);
}
// 1 + 2 + 3 + 4 + 5 = 15
// 15 % 2 = 1 (odd)
void oddEven(int num1)
{
    int sum = 0;
    while (num1 > 0) {
        int digit = num1 % 10; 
        sum += digit; 
        num1 /= 10; 
    }
    if (sum % 2 == 0) 
    {
        cout << "The number is even." << endl;
    } 
    else 
    {
        cout << "The number is odd." << endl;
    }
}