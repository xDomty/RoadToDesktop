#pragma once
#pragma warning(disable : 4996)

#include <iostream>
#include <optional>
using namespace std;

namespace Problem18 {
    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    struct sDate;

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    bool IsItTheLastDayInMonth(sDate Date);

    bool IsItTheLastMonthInTheYear(unsigned short month);

    sDate IncreaseDateByOneDay(sDate Date);

    optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2);

    int GetDifferenceInDays(sDate Date1, sDate Date2);

    sDate GetSystemDate();

    void main();
}