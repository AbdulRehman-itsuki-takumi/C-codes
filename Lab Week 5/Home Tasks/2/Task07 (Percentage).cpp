#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number Counts : ";
    int n;
    cin>> n;

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int p5 = 0;

    for(int i = 1; i <= n; i++)
    {
        cout<<"Enter A Number : ";
        cin>> num;

        if(num < 200)
        {
            p1 = p1 + 1;
        }
        else if(num < 400)
        {
            p2 = p2 + 1;
        }
        else if(num < 600)
        {
            p3 = p3 + 1;
        }
        else if(num < 800)
        {
            p4 = p4 + 1;
        }
        else
        {
            p5 = p5 + 1;
        }
    }

    cout<< (p1 * 100.0) / n <<"%"<< endl;
    cout<< (p2 * 100.0) / n <<"%"<< endl;
    cout<< (p3 * 100.0) / n <<"%"<< endl;
    cout<< (p4 * 100.0) / n <<"%"<< endl;
    cout<< (p5 * 100.0) / n <<"%"<< endl;

}