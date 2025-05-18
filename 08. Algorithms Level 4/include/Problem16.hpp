#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Problem16 {
    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    struct sDate;

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    bool IsItTheLastDayInMonth(sDate Date);

    bool IsItTheLastMonthInTheYear(unsigned short month);

    sDate IncreaseDateByOneDay(sDate Date);

    string DateAsString(sDate Date);

    void main();
}