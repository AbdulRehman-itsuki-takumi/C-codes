#include<iostream>
using namespace std;
main()
{
cout<<" Enter A Character : ";
char letter;
cin>>letter;
}

int checkAlphabetCase(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
    {
    cout << "The character is an uppercase letter." << endl;
    }
    else if (letter >= 'a' && letter <= 'z') 
    {
    cout << "The character is a lowercase letter." << endl;
    } 
    else 
    {
    cout << "The character is not an alphabet letter." << endl;
    }
}