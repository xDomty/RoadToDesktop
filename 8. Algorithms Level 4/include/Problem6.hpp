#pragma once
#include <iostream>
using namespace std;

namespace Convert{

    namespace DaysTo{
        template <typename T>
        T Hours(T NumOfDays){
           return NumOfDays * 24;
        }

        template <typename T>
        T Minutes(T NumOfDays){
           return NumOfDays * 24 * 60;
        }

        template <typename T>
        T Seconds(T NumOfDays){
           return NumOfDays * 24 * 60 * 60;
        }
    }

}

namespace FindThe{
    short NumberPositionInArrayButOnlyOnce(short NumberToSearch, short arr[100], int ArrayLength);
    
    bool IsThatNumberInArray(short NumberToSearch, short arr[100], int ArrayLength);
}

namespace Problem6{
    
    struct stMonthDetails;
   
    bool IsLeapYear(unsigned short year);
    
    unsigned short ReadNumber(string message);
    
    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

    stMonthDetails FillMonthDETAILS(bool LeapYear, unsigned short month);

    bool IsMonthDetailsStructEmpty(stMonthDetails MonthDetails);

    void main();
}