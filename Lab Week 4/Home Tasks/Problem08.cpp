#include<iostream>
using namespace std;

main()
{
    cout<<"Enter number (0-100) : ";
    int num;
    cin>>num;

    if(num < 0)
    {
        cout<<"Number Is Out Of Range";
    }
    else if(num > 100)
    {
        cout<<"Number Is Out Of Range";
    }
    else if(num == 100)
    {
        cout<<"One Hundred";
    }

    else if(num >= 20)
    {
        int tens = num / 10;
        int ones = num % 10;

        if(tens == 2) 
        {
            cout<<"Twenty ";
        }    
        else if(tens == 3)
        { 
            cout<<"Thirty ";
        }
        else if(tens == 4) 
        {
            cout<<"Forty ";
        }
        else if(tens == 5) 
        {
            cout<<"Fifty ";
        }
        else if(tens == 6) 
        {
            cout<<"Sixty ";
        }
        else if(tens == 7) 
        {
            cout<<"Seventy ";
        }
        else if(tens == 8) 
        {
            cout<<"Eighty ";
        }
        else if(tens == 9) 
        {
            cout<<"Ninety ";
        }

        if(ones == 1) 
        {
            cout<<"One";
        }
        else if(ones == 2) 
        {
            cout<<"Two";
        }    
        else if(ones == 3) 
        {
            cout<<"Three";
        }
        else if(ones == 4) 
        {
            cout<<"Four";
        }
        else if(ones == 5) 
        {
            cout<<"Five";
        }
        else if(ones == 6) 
        {
            cout<<"Six";
        }
        else if(ones == 7) 
        { 
            cout<<"Seven";
        }
        else if(ones == 8) 
        {
            cout<<"Eight";
        }
        else if(ones == 9) 
        {
            cout<<"Nine";
        }    
    }

    else if(num >= 10)
    {
        if(num == 10) 
        {
            cout<<"Ten";
        }
        else if(num == 11) 
        {
            cout<<"Eleven";
        }
        else if(num == 12) 
        {
            cout<<"Twelve";
        }
        else if(num == 13) 
        {
            cout<<"Thirteen";
        }
        else if(num == 14) 
        {
            cout<<"Fourteen";
        }
        else if(num == 15) 
        {
            cout<<"Fifteen";
        }
        else if(num == 16) 
        {
            cout<<"Sixteen";
        }
        else if(num == 17) 
        {
            cout<<"Seventeen";
        }
        else if(num == 18) 
        {
            cout<<"Eighteen";
        }
        else if(num == 19) 
        {
            cout<<"Nineteen";
        }
    }

    else
    {
        if(num == 0) 
        {
            cout<<"Zero";
        }
        else if(num == 1) 
        {
            cout<<"One";
        }
        else if(num == 2) 
        {
            cout<<"Two";
        }
        else if(num == 3) 
        {
            cout<<"Three";
        }
        else if(num == 4) 
        {
            cout<<"Four";
        }
        else if(num == 5) 
        {
            cout<<"Five";
        }
        else if(num == 6) 
        {
            cout<<"Six";
        }
        else if(num == 7) 
        {
            cout<<"Seven";
        }
        else if(num == 8) 
        {
            cout<<"Eight";
        }
        else if(num == 9) 
        {
            cout<<"Nine";
        }    
    }
}