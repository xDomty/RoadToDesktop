#include "../include/Problem11.hpp"

namespace Problem11 {
    bool IsLeapYear(unsigned short year) {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear) {
        if (month < 1 || month > 12) return 0;
        short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
    }

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day) {
        short TotalDays = 0;
        for (short i = 1; i < Month; i++) TotalDays += NumberOfDaysInAMonth(i, IsLeapYear(Year));
        TotalDays += Day; return TotalDays;
    }

    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year)
    {
        sDate Date;
        short RemainingDays = DateOrderInYear;
        short MonthDays = 0;
        Date.Year = Year;
        Date.Month = 1;
        while (true)
        {
            MonthDays = NumberOfDaysInAMonth(Date.Month, Year);
            if (RemainingDays > MonthDays)
            {
                RemainingDays -= MonthDays;
                Date.Month++;
            }
            else
            {
                Date.Day = RemainingDays;
                break;
            }
        }
        return Date;
    }


    unsigned short ReadNumber(string message) {
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }

    void main() {
        short Year = ReadNumber("Enter the year? ");
        short Month = ReadNumber("Enter the month? ");
        short Day = ReadNumber("Enter the day? ");

        cout << endl;
        short TotalDays = TotalDaysFromTheBegginingOfTheYear(Year, Month, Day);

        sDate Date;
        Date = GetDateFromDayOrderInYear(TotalDays, Year);
        
        cout << "The total days from the beggining of the year is : " << TotalDays << endl;
        cout << "The Date After Converting total days to date : " << Date.Day << "/" << Date.Month << "/" << Date.Year;
    }
}