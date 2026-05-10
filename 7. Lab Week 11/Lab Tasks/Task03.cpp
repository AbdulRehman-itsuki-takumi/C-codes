#include <iostream>
using namespace std;

int NissanCars(int arr[5][5])
{
    int sum = 0;
    int rows = 3;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[rows][i];
    }
    return sum;
}

int RedCars(int arr[5][5])
{
    int sum = 0;
    int cols = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i][cols];
    }
    return sum;
}

void ToyotaBlueCar(int arr[5][5])
{
    cout << arr[1][3];
}

void transposePrint(int arr[5][5])
{
    cout << "\nTransposed Matrix :\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int converter(int arr[5][5], int colorCol)
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i][colorCol];
    }

    return sum;
}

main()
{
    int rows = 5;
    int cols = 5;
    cout << "The Quantity Of Toyota Blue Color Cars Are : ";

    int carData[5][5] =
        {
            {10, 7, 12, 10, 4},
            {18, 11, 15, 17, 2},
            {23, 19, 12, 16, 14},
            {7, 12, 16, 0, 2},
            {3, 5, 6, 2, 1}};

    ToyotaBlueCar(carData);

    int totalRedCars = RedCars(carData);
    cout << "\nTotal Red Cars In The Company Are : " << totalRedCars << endl;

    int totalNissanCars = NissanCars(carData);
    cout << "Total Nissan Cars In The Company Are : " << totalNissanCars << endl;

    cout<<"\nEnter The Color Column"<<endl;
    cout<<"Red Column 1\nBlack Column 2\nBrown Column 3\nBlue Column 4\nGray Column 5"<<endl;
    cout<<"Enter Column Number : ";
    int colNum;
    cin>>colNum;
    
    string colorName;
    if(colNum = 1)
    {
        colorName = "Red";
    }
    else if(colNum = 2)
    {
        colorName = "Black";
    }
    else if(colNum = 3)
    {
        colorName = "Brown";
    }
    else if(colNum = 4)
    {
        colorName = "Blue";
    }
    else if(colNum = 5)
    {
        colorName = "Gray";
    }
    int totalBlue = converter(carData, colNum); // we are taking Blue color column here
    cout << "Total "<<colorName<<"Cars Using Converter : " << totalBlue << endl;

    transposePrint(carData);
}