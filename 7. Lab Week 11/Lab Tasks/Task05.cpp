#include<iostream>
using namespace std;

bool identity(int arr[][3])
{
 int a = arr[0][0];
 int b = arr[1][1];
 int c = arr[2][2];

 if (a == b && b == c)
 {
    return true;
 }
 
 return false;

}

main()
{
    int matrix[3][3];

    cout<<"\nEnter The Elements Of The Matrix."<<endl;
    cout<<"Enter The Element At Position[0][0] : ";
    cin>>matrix[0][0];
    cout<<"Enter The Element At Position[0][1] : ";
    cin>>matrix[0][1];
    cout<<"Enter The Element At Position[0][2] : ";
    cin>>matrix[0][2];
    cout<<"Enter The Element At Position[1][0] : ";
    cin>>matrix[1][0];
    cout<<"Enter The Element At Position[1][1] : ";
    cin>>matrix[1][1];
    cout<<"Enter The Element At Position[1][2] : ";
    cin>>matrix[1][2];
    cout<<"Enter The Element At Position[2][0] : ";
    cin>>matrix[2][0];
    cout<<"Enter The Element At Position[2][1] : ";
    cin>>matrix[2][1];
    cout<<"Enter The Element At Position[2][2] : ";
    cin>>matrix[2][2];

    bool result = identity(matrix);

    if(result)
    {
        cout<<"Its An Identity Matrix.";
    }
    else
    {
        cout<<"Its Not An Identity Matrix.";
    }

    
}