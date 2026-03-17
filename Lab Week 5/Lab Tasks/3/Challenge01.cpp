#include<iostream>
using namespace std;
main()
{
    for(int rows = 1; rows <= 10; rows = rows + 1)
       {
         for(int coloumns = 1; coloumns <= rows; coloumns = coloumns + 1)
            {
                cout<<"*";
            }
            cout<<endl;
       }
       for(int rows = 9; rows >= 1; rows = rows - 1)
       {
         for(int coloumns = 1; coloumns <= rows; coloumns = coloumns + 1)
            {
                cout<<"*";
            }
            cout<<endl;
       }


}