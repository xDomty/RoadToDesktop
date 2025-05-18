#pragma once
#include <iostream>
using namespace std;

namespace Problem11 {
    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day);

    struct sDate;

    sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year);

    unsigned short ReadNumber(string message);

    void main();
}