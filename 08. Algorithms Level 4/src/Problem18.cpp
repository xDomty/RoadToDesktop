#include "../include/Problem18.hpp"

namespace Problem18 {
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

    optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2)
    {
        if (Date1.Year < Date2.Year)   return true;
        if (Date1.Year > Date2.Year)   return false;
        if (Date1.Month < Date2.Month) return true;
        if (Date1.Month > Date2.Month) return false;
        if (Date1.Day == Date2.Day)    return nullopt;
        else return (Date1.Day < Date2.Day);
    }

    int GetDifferenceInDays(sDate Date1, sDate Date2)
    {
        int Days = 0;
        while (true)
        {
            if (IsDate1BeforeDate2(Date1, Date2) == true) {
                Days++;
                Date1 = IncreaseDateByOneDay(Date1);
            }
            else break;
        }
        return abs(Days);
    }

    sDate GetSystemDate()
    {
        sDate Date;
        time_t t = time(0);
        tm* now = localtime(&t);
        Date.Year = now->tm_year + 1900;
        Date.Month = now->tm_mon + 1;
        Date.Day = now->tm_mday;
        return Date;
    }


    void main() {
        cout << "Please enter the birth date :\n";
        sDate BirthDate = ReadDateInfo();  cout << endl;

        cout << "Your age is = " << GetDifferenceInDays(BirthDate,GetSystemDate()) << "Days";
    }
}