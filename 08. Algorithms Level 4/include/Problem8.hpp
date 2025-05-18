#pragma once
#include <iostream>
using namespace std;

namespace Problem8{

    short DayOfWeekOrder(short Day, short Month, short Year);

    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    string MonthShortName(short RoleOfTheMonth);

    void PrintMonthCalendar(short Month, short Year);

    unsigned short ReadNumber(string message);

    void main();
}