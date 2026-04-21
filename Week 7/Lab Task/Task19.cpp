#include <iostream>
#include <cmath>
using namespace std;


int projectTimeCalculation(int neededHours, int days, int workers); 

int main(){
    int hours, days, workers;
    cout<<" Enter needed hours: ";
    cin>>hours;
    cout<<" Enter number of days: ";
    cin>>days;
    cout<<" Enter number of workers: ";
    cin>>workers;

    
    projectTimeCalculation(hours, days, workers); 
    
    return 0;
}
int projectTimeCalculation(int neededHours, int days, int workers) {
    double availableTime = (days * 0.9) * 10 * workers;
    int finalAvailableHours = (int)availableTime;

    if (finalAvailableHours >= neededHours) {
        int hoursLeft = finalAvailableHours - neededHours;
        cout << "Yes! " << hoursLeft << " hours left." << endl;
    } else {
        int hoursNeeded = neededHours - finalAvailableHours;
        cout << "Not enough time! " << hoursNeeded << " additional hours needed." << endl;
    }

    return finalAvailableHours;
}