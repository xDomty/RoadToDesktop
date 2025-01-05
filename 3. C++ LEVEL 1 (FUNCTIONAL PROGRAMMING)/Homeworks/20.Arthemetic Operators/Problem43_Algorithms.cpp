#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   long long int TotalSeconds;
   cout << "Hello!,\nThis program calculates the total seconds to days, hours, minutes\n";
   cout << "Please enter the total seconds\n";
   cin >> TotalSeconds;
   int SecondsPerDay = 24*60*60;
   short int SecondsPerHour = 60*60;
   short int SecondsPerMinute = 60;
   long long int NumberOfDays = floor(TotalSeconds/SecondsPerDay);
   long long int TheRest = TotalSeconds % SecondsPerDay;
   int TheRestInt = TheRest;
   int NumberOfHours = floor(TheRestInt/SecondsPerHour);
   TheRestInt = TheRestInt % SecondsPerHour;
   short int TheRestShortInt = TheRestInt;
   short int NumberOfMinutes = floor(TheRestShortInt / SecondsPerMinute);
   TheRestShortInt = TheRestShortInt % SecondsPerMinute;
   short int NumberOfSeconds = TheRestShortInt;
   cout << "Here is your results:\n";
   cout << "The number of days is : " << NumberOfDays << " Days,\n";
   cout << "The number of hours is : " << NumberOfHours << " hours," << endl;
   cout << "The number of minutes is : " << NumberOfMinutes << " minutes,\n";
   cout << "And lastely the number of seconds is : " << NumberOfSeconds << " seconds.\n";
   system("pause");
}