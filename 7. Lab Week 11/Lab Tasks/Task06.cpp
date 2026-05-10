#include<iostream>
using namespace std;

bool shipCheck(string arr[5][5], int rowPoint, int colPoint)
{
    if(arr[rowPoint][colPoint] == "*")
    {
        return true;
    }
    else
    {
        return false;
    }
}

main()
{
    string board[5][5] = 
    {
        {".", ".", "*", "*", "."},
        {"*", ".", ".", ".", "."},
        {"*", ".", ".", ".", "."},
        {"*", "*", "*", "*", "*"},
        {".", ".", ".", ".", "."}
    };

    cout<<"Enter The Point You Wanna Attack."<<endl;
    cout<<"Enter Row Number : ";
    int row;
    cin>>row;
    cout<<"Enter Column Number : ";
    int col;
    cin>>col;

    bool found = shipCheck(board, row, col);

    if(found)
    {
        cout<<"BOOM!!!";
    }
    else
    {
        cout<<"SPLASH!!!";
    }

}