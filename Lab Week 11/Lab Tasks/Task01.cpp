#include<iostream>
using namespace std;
main()
{
    string color[5] = {"Red", "Black", "Brown", "Blue", "Gray"};
    int suzukiQuantity[5] = {10, 7, 12, 10, 4};
    int toyotaQuantity[5] = {18, 11, 15, 17, 2};
    int nissanQuantity[5] = {23, 19, 12, 16, 14};
    int bmwQuantity[5] = {7, 12, 16, 0, 2};
    int audiQuantity[5] = {3, 5, 6, 2, 1};

    int carData[5][5] = 
    {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    };

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<carData[i][j]<<", ";
        }
        cout<<endl;
    }
}