#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<<"Enter a word : ";
    cin>>word;
    char letter;
    cout<<"Enter a letter : ";
    cin>>letter;
    bool found = false;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << letter << " found in the word " << word << endl;
    }
    else
    {
        cout << letter << " not found in the word " << word << endl;
    }

}