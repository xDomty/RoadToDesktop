#include "../include/Problem15.hpp"

namespace Problem15 {
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

    void main() {
        sDate Date = ReadDateInfo();

        cout << endl;

        if (IsItTheLastDayInMonth(Date)) cout << "The day you entered is the last day in month :)\n";
        else cout << "The day you entered is not the last day in month :(\n";

        if (IsItTheLastMonthInTheYear(Date.Month)) cout << "The month you entered is the last month in year :)\n";
        else cout << "The month you entered is not the last month in year :(\n";
    }
}

