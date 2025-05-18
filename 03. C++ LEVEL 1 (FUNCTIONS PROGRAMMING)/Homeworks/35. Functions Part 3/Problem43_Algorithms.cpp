#include <iostream>
#include <cmath>
using namespace std;

 //Global Seconds
   long long int TotalSeconds;

void Welcome()
{
	cout << "Hello!,\nThis program calculates the total seconds to days, hours, minutes\n";
	cout << "Please enter the total seconds\n";
}

void ChangeGlobalSeconds()
{
	cin >> TotalSeconds;
}

long long int SecondsToDays(long long int seconds)
{
    int SecondsPerDay = 24 * 60 * 60;
    short int SecondsPerHour = 60 * 60;
    short int SecondsPerMinute = 60;
    long long int NumberOfDays = floor(seconds / SecondsPerDay);
    return NumberOfDays;
}

long long int SecondsToHours(long long int seconds)
{
    int SecondsPerDay = 24 * 60 * 60;
    short int SecondsPerHour = 60 * 60;
    short int SecondsPerMinute = 60;
    long long int NumberOfDays = floor(seconds / SecondsPerDay);
    long long int TheRest = seconds % SecondsPerDay;
    int TheRestInt = TheRest;
    int NumberOfHours = floor(TheRestInt / SecondsPerHour);
    return NumberOfHours;
}

long long int SecondsToMinutes(long long int seconds)
{
    int SecondsPerDay = 24 * 60 * 60;
    short int SecondsPerHour = 60 * 60;
    short int SecondsPerMinute = 60;
    long long int NumberOfDays = floor(seconds / SecondsPerDay);
    long long int TheRest = seconds % SecondsPerDay;
    int TheRestInt = TheRest;
    int NumberOfHours = floor(TheRestInt / SecondsPerHour);
    TheRestInt = TheRestInt % SecondsPerHour;
    short int TheRestShortInt = TheRestInt;
    short int NumberOfMinutes = floor(TheRestShortInt / SecondsPerMinute);
    return NumberOfMinutes;
}

long long int RemainingSeconds(long long int seconds)
{
    int SecondsPerDay = 24 * 60 * 60;
    short int SecondsPerHour = 60 * 60;
    short int SecondsPerMinute = 60;
    long long int NumberOfDays = floor(seconds / SecondsPerDay);
    long long int TheRest = seconds % SecondsPerDay;
    int TheRestInt = TheRest;
    int NumberOfHours = floor(TheRestInt / SecondsPerHour);
    TheRestInt = TheRestInt % SecondsPerHour;
    short int TheRestShortInt = TheRestInt;
    short int NumberOfMinutes = floor(TheRestShortInt / SecondsPerMinute);
    TheRestShortInt = TheRestShortInt % SecondsPerMinute;
    short int NumberOfSeconds = TheRestShortInt;
    return NumberOfSeconds;
}

void TheResults()
{
    cout << "The number of days is : " << SecondsToDays(TotalSeconds) << " Days,\n";
    cout << "The number of hours is : " << SecondsToHours(TotalSeconds) << " hours," << endl;
    cout << "The number of minutes is : " << SecondsToMinutes(TotalSeconds) << " minutes,\n";
    cout << "And lastely the number of seconds is : " << RemainingSeconds(TotalSeconds) << " seconds.\n";
}

void TheProgram()
{
    Welcome();
	ChangeGlobalSeconds();
    TheResults();
}

int main()
{
    TheProgram();
}