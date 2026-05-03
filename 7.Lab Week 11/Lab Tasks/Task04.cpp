#include<iostream>
using namespace std;

int sum(int arr[][3])
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    } 
    return sum;
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

    int sumOfAll = sum(matrix);

    cout<<"Sum Of All Elements Are : "<<sumOfAll;
}