#pragma once
#include <iostream>
using namespace std;

namespace Problem15 {
    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    struct sDate;

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    bool IsItTheLastDayInMonth(sDate Date);

    bool IsItTheLastMonthInTheYear(unsigned short month);

    void main();
}
