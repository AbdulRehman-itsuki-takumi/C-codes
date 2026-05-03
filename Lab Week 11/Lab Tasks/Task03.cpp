#include<iostream>
using namespace std;

int NissanCars(int arr[5][5])
{
    int sum = 0;
    int rows = 3;
    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[rows][i];
    }
    return sum;

}

int RedCars(int arr[5][5])
{
    int sum = 0;
    int cols = 0;
    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[i][cols];
    }
    return sum;

}

void ToyotaBlueCar(int arr[5][5])
{
    cout<<arr[1][3];

}
main()
{
    int rows = 5;
    int cols = 5;
    cout<<"The Quantity Of Toyota Blue Color Cars Are : ";
    
    int carData[5][5] = 
    {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    ToyotaBlueCar(carData);

    int totalRedCars = RedCars(carData);
    cout<<"\nTotal Red Cars In The Company Are : "<<totalRedCars<<endl;

    int totalNissanCars = NissanCars(carData);
    cout<<"Total Nissan Cars In The Company Are : "<<totalNissanCars<<endl;
    

}