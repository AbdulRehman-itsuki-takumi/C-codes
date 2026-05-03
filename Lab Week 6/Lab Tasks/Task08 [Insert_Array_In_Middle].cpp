#include <iostream>
using namespace std;

main()
{
    int n1, n2;

    cout << "Enter number of elements for first array (must be 2): ";
    cin >> n1;

    int array_1[n1];

    cout << "Enter " << n1 << " numbers, one per line:" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> array_1[i];
    }

    cout << "Enter number of elements for second array: ";
    cin >> n2;

    int array_2[n2];

    cout << "Enter " << n2 << " numbers, one per line:" << endl;
    for (int j = 0; j < n2; j++)
    {
        cin >> array_2[j];
    }

    int result_array[n2 + 2];

    result_array[0] = array_1[0];

    for (int k = 0; k < n2; k++)
    {
        result_array[k + 1] = array_2[k];
    }

    result_array[n2 + 1] = array_1[1];

    cout << "Resulting array: [";
    for (int l = 0; l < n2 + 2; l++)
    {
        cout << result_array[l];
        if (l < n2 + 1)
            cout << ", ";
    }
    cout << "]";
}