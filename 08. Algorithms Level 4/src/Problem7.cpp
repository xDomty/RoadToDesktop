#include "../include/Problem7.hpp"
using namespace std;

namespace Problem7{
    
    bool IsLeapYear(unsigned short year){
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }
    
    string DaysInWeek(short RoleOfDay){
        string TheDayName[7] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
        return TheDayName[RoleOfDay];
    }

    short DayOfWeekOrder(short Day, short Month, short Year)
    {
       short a, y, m;
       a = (14 - Month) / 12;
       y = Year - a;
       m = Month + (12 * a) - 2;
       return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }

    unsigned short ReadNumber(string message){
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }

    void main(){
        short Year = ReadNumber("Enter the year? ");
        short Month = ReadNumber("Enter the month? ");
        short Day = ReadNumber("Enter the day? ");
        cout << endl << endl;
        cout << "\nDate :" << Day << "/" << Month << "/" << Year;
        cout << "\nDay Order : " << DayOfWeekOrder(Day, Month, Year);
        cout << "\nDay Name : " << DaysInWeek(DayOfWeekOrder(Day, Month, Year));
    }
}