#pragma once
#include <iostream>
using namespace std;

namespace Problem7{
    
    bool IsLeapYear(unsigned short year);
    
    string DaysInWeek(short RoleOfDay);

    short DayOfWeekOrder(short Day, short Month, short Year);

    unsigned short ReadNumber(string message);

    void main();
}