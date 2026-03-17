#include<iostream>
using namespace std;
main()
{
    int n = 5;

    for(int rows = 1; rows <= n; rows++)
    {
        cout<<endl;         //For Rows I Am adding this 

        for(int col = n; col >= n - rows + 1; col--)
        {
            cout<<col;
        }
    }
}