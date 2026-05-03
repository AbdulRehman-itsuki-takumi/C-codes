#include <iostream>
using namespace std;

int largestArray(int arr[][3])
{
    int temp[3][3];
    int colSum1 = 0;
    int colSum2 = 0;
    int colSum3 = 0;

    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        colSum1 = colSum1 + arr[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 1;
        colSum2 = colSum2 + arr[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        int j = 2;
        colSum3 = colSum3 + arr[i][j];
    }

    if (colSum1 > colSum2 && colSum1 > colSum3)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                temp[i][i] = arr[i][i];
                arr[i][i] = arr[j][j];
                arr[j][j] = temp[i][i];
            }
        }
    }
    return temp[3][3];
}

main()
{
    int matrix[3][3];

    cout << "\nEnter The Elements Of The Matrix." << endl;
    cout << "Enter The Element At Position[0][0] : ";
    cin >> matrix[0][0];
    cout << "Enter The Element At Position[0][1] : ";
    cin >> matrix[0][1];
    cout << "Enter The Element At Position[0][2] : ";
    cin >> matrix[0][2];
    cout << "Enter The Element At Position[1][0] : ";
    cin >> matrix[1][0];
    cout << "Enter The Element At Position[1][1] : ";
    cin >> matrix[1][1];
    cout << "Enter The Element At Position[1][2] : ";
    cin >> matrix[1][2];
    cout << "Enter The Element At Position[2][0] : ";
    cin >> matrix[2][0];
    cout << "Enter The Element At Position[2][1] : ";
    cin >> matrix[2][1];
    cout << "Enter The Element At Position[2][2] : ";
    cin >> matrix[2][2];

    int result = largestArray(matrix);
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
    }
}