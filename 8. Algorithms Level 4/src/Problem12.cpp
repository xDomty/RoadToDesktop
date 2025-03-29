#include "../include/Problem12.hpp"

namespace Problem12 {
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

    sDate ReadDateInfo() {
        sDate Date;

        Date.Year = ReadNumber("Enter the year? ");
        Date.Month = ReadNumber("Enter the month? ");
        Date.Day = ReadNumber("Enter the day? ");

        return Date;
    }

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

    sDate DateAddDays(unsigned int Days, sDate Date)
    {
        short RemainingDays = Days + TotalDaysFromTheBegginingOfTheYear(Date.Year,Date.Month,Date.Day );
        short MonthDays = 0;
        Date.Month = 1;

        while (true)
        {
            MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);
            if (RemainingDays > MonthDays)
            {
                RemainingDays -= MonthDays;
                Date.Month++;
                if (Date.Month > 12)
                {
                    Date.Month = 1;
                    Date.Year++;
                }
            }
            else
            {
                Date.Day = RemainingDays;
                break;
            }
        }
        return Date;
    }

    string DateAsString(sDate Date) {
        return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
    }

    unsigned int ReadNumber(string message) {
        unsigned int Number;
        cout << message;
        cin >> Number;
        return Number;
    }

    void main() {
        sDate Date; Date = ReadDateInfo();  cout << endl;
        unsigned int DaysToAdd = ReadNumber("How Many Days To Add ? ");
        cout << endl << endl;
        Date = DateAddDays(DaysToAdd, Date);

        cout << "THE NEW DATE IS : " << DateAsString(Date);
    }
}