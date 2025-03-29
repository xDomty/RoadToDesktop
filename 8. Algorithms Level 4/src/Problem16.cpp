#include "../include/Problem16.hpp"

namespace Problem16 {
    bool IsLeapYear(unsigned short year) {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear) {
        if (month < 1 || month > 12) return 0;
        short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
    }

    struct sDate
    {
        unsigned short Year;
        unsigned short Month;
        unsigned short Day;
    };

    unsigned short ReadNumber(string message) {
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }

    sDate ReadDateInfo() {
        sDate Date;

        Date.Year = ReadNumber("Enter the year? ");
        Date.Month = ReadNumber("Enter the month? ");
        Date.Day = ReadNumber("Enter the day? ");

        return Date;
    }

    bool IsItTheLastDayInMonth(sDate Date) {
        return (Date.Day == NumberOfDaysInAMonth(Date.Month, IsLeapYear(Date.Year)));
    }

    bool IsItTheLastMonthInTheYear(unsigned short month) {
        return month == 12;
    }

    sDate IncreaseDateByOneDay(sDate Date)
    {
        if (IsItTheLastDayInMonth(Date))
        {
            if (IsItTheLastMonthInTheYear(Date.Month))
            {
                Date.Month = 1;
                Date.Day = 1;
                Date.Year++;
            }
            else
            {
                Date.Day = 1;
                Date.Month++;
            }
        }
        else
        {
            Date.Day++;
        }
        return Date;
    }

    string DateAsString(sDate Date) {
        return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
    }

    void main() {
        sDate* Date = new sDate; *Date = ReadDateInfo();
        sDate NewDate = IncreaseDateByOneDay(*Date); delete Date;
        cout << endl;

        cout << "The new date after adding 1 day is : " << DateAsString(NewDate);
    }
}