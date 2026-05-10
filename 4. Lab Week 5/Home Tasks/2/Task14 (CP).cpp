#include<iostream>
using namespace std;
main()
{
    for(int rows = 1; rows <= 5; rows = rows + 1)
       {
         for(int coloumns = 1; coloumns <= rows; coloumns = coloumns + 1)
            {
                cout<<"*";
            }
            cout<<endl;
       }
}       