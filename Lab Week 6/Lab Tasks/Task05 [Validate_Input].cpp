#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" numbers, one per line:"<<endl;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        bool duplicate = false;
        for(int j = 0; j < i; j++)
        {
            if(array[j] == num)
            {
                cout<<"Already entered"<<endl;
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
        {
            array[i] = num;
        }
        else
        {
            i--;
        }
    }

}