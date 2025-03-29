#pragma once
#include <iostream>
#include <optional>
using namespace std;

namespace Problem17 {
    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    struct sDate;

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    bool IsItTheLastDayInMonth(sDate Date);

    bool IsItTheLastMonthInTheYear(unsigned short month);

    sDate IncreaseDateByOneDay(sDate Date);

    sDate DecreaseDateByOneDay(sDate Date);

    optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2);

    int GetDifferenceInDays(sDate Date1, sDate Date2);

    void main();
}