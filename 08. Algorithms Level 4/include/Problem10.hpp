#pragma once
#include <iostream>
using namespace std;

namespace Problem10{

    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day);
    
    unsigned short ReadNumber(string message);

    void main();
}