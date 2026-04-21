#include<iostream>
using namespace std;
int main(){
    cout<<" Enter a character: ";
char letter;
cin>>letter;

return 0;
}
int checkAlphabetCase(char letter){
    if (letter >= 'A' && letter <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    } else if (letter >= 'a' && letter <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    } else {
        cout << "The character is not an alphabet letter." << endl;
    }
    return 0;
}