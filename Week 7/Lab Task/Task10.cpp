#include<iostream>
using namespace std;
int main(){
    bool isSymmetrical(int num1);
    int num1;

   cout<<" Enter a three-digit number: ";
    cin>>num1;
   bool ans = isSymmetrical(num1);
   return 0;
}
bool isSymmetrical(int num1) {
    
    int firstDigit = num1 / 100; 
    int lastDigit = num1 % 10;   
    bool result;

    if (firstDigit == lastDigit) {
        result = true;
    } else {
        result = false;
    }

    if (result) {
        cout << "The number is symmetrical." << endl;
    } else {
        cout << "The number is not symmetrical." << endl;
    }

    return result;
}