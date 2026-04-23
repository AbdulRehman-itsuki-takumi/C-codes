#include <iostream>
using namespace std;

void timetravel(int num1, int num2);

main() 
{
    cout << "Time In Hours : ";
    int num1;
    cin >> num1;
    
    cout << "Time In Min : ";
    int num2;
    cin >> num2;
    
    timetravel(num1, num2);
}

void timetravel(int num1, int num2) 
{
    int totalMinutes = num2 + 15;
    int extraHours = totalMinutes / 60;
    int remainingMins = totalMinutes % 60;
    int finalHours = num1 + extraHours;

    cout << "Time After 15 Min : " << finalHours << " Hours And " << remainingMins << " Min" << endl;
}