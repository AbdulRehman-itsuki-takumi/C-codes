#include <iostream>
using namespace std;
main()
{
    cout << "Enter How Many Numbers You Wanna Add : ";
    int n;
    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Your Number : ";
        cin >> num[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Your Number Is : " << num[i] << endl;
    }
}