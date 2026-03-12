#include<iostream>
using namespace std;
main()
{
   cout<<"Enter The Number Of Holidays : ";
   float holidays;
   cin>>holidays;
   
   float daysInYear = 365;
   float workingDays = daysInYear - holidays;
   float workingDaysMinsPerDay = 63;
   float holidaysMinsPerDay = 127;
   float gameTime = (workingDays * workingDaysMinsPerDay) + (holidays * holidaysMinsPerDay);
   float normOfGames = 30000;
   int normDiff = normOfGames - gameTime;

   if(normDiff > 0)
    {
        cout<<"Tom Sleeps Well\n";
        int hours = normDiff / 60;
        int mins = normDiff % 60;
        cout<<"Total "<<hours<<" Hours And "<<mins<<" Minutes Less For Play.";
    }
    else
    {
        cout<<"Tom Will Run Away\n";
        int hours = (normDiff / 60) * (-1);
        int mins = (normDiff % 60) * (-1);
        cout<<"Total "<<hours<<" Hours And "<<mins<<" Minutes Less For Play.";
    }

}