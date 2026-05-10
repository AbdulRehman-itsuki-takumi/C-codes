#include <iostream>
using namespace std;

main()
{
    int num_elements, even = 0;
    cout << "Enter Number Of Elements : ";
    cin >> num_elements;

    int array[num_elements];
    cout << "Enter " << num_elements << " Numbers : " << endl;

    for (int idx = 0; idx < num_elements; idx++)
    {
        cin >> array[idx];
        if (array[idx] % 2 == 0)
        {
            even += 1;
        }
    }
    cout << "Total Even Numbers : " << even;
}