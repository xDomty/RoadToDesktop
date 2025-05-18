#include "../include/Problem19.hpp"

namespace Problem19 {
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

    void SwapDates(sDate& Date1, sDate& Date2)
    {
        sDate TempDate;

        TempDate.Year = Date1.Year;
        TempDate.Month = Date1.Month;
        TempDate.Day = Date1.Day;

        Date1.Year = Date2.Year;
        Date1.Month = Date2.Month;
        Date1.Day = Date2.Day;

        Date2.Year = TempDate.Year;
        Date2.Month = TempDate.Month;
        Date2.Day = TempDate.Day;
    }

    int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
    {
        int Days = 0;
        short SawpFlagValue = 1;

        if (!IsDate1BeforeDate2(Date1, Date2))
        {
            //Swap Dates
            SwapDates(Date1, Date2);
            SawpFlagValue = -1;
        }
        while (IsDate1BeforeDate2(Date1, Date2))
        {
            Days++;
            Date1 = IncreaseDateByOneDay(Date1);
        }

        return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
    }

    void main() {
        cout << "Please enter the info of date 1 :\n";
        sDate Date1 = ReadDateInfo();  cout << endl << endl;

        cout << "Please enter the info of date 2 : \n";
        sDate Date2 = ReadDateInfo();  cout << endl << endl;

        cout << "\nDiffrence is: " << GetDifferenceInDays(Date1, Date2) << " Day(s).";
        cout << "\nDiffrence (Including End Day) is: " << GetDifferenceInDays(Date1, Date2, true) << " Day(s).";
    }
}