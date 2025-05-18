#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Problem12 {
    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day);

    struct sDate;

    sDate ReadDateInfo();

    sDate GetDateFromDayOrderInYear(short DateOrderInYear, short Year);

    sDate DateAddDays(unsigned int Days, sDate Date);

    string DateAsString(sDate Date);

    unsigned int ReadNumber(string message);

    void main();
}