#include "../include/Problem9.hpp"

namespace Problem9{

    short DayOfWeekOrder(short Day, short Month, short Year)
    {
       short a, y, m;
       a = (14 - Month) / 12;
       y = Year - a;
       m = Month + (12 * a) - 2;
       return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }

    bool IsLeapYear(unsigned short year){
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear){
        if (month < 1 || month > 12) return 0;
        short NumberOfDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
 
     }

    string MonthShortName(short RoleOfTheMonth){
       string MonthName[12] = {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
       return MonthName[RoleOfTheMonth];
    }

    void PrintMonthCalendar(short Month, short Year)
    {
        int NumberOfDays;
        // Index of the day from 0 to 6
        int current = DayOfWeekOrder(1, Month, Year);
        NumberOfDays = NumberOfDaysInAMonth(Month, IsLeapYear(Year));

        printf("\n  _______________%s_______________\n\n",
        MonthShortName(Month-1).c_str());

        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");

        int i;
        for (i = 0; i < current; i++) printf("     ");

        for (int j = 1; j <= NumberOfDays; j++)
        {
           printf("%5d", j);
           if (++i == 7) {
               i = 0;
               printf("\n");
           }
        }

        printf("\n  _________________________________\n");
    }

    void PrintYearCalender(unsigned short Year){
        cout << endl;

        cout << "  _________________________________\n\n";
        cout << "         Year - " << Year << " Calender\n";
        cout << "  _________________________________\n";

        for (short Month = 1; Month < 12; Month++) PrintMonthCalendar(Month,Year);
    }

    unsigned short ReadNumber(string message){
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }

    void main(){
        short Year = ReadNumber("Enter the year? ");

        PrintYearCalender(Year);
    }
}