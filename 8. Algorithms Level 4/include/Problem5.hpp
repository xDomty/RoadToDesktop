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

namespace Find{
    short FindNumberPositionInArrayButOnlyOnce(short NumberToSearch, short arr[100], int ArrayLength);
    
    bool IsNumberInArray(short NumberToSearch, short arr[100], int ArrayLength);
}

namespace Problem5{
    struct stMonthDetails;
   
    bool IsLeapYear(unsigned short year);
    
    unsigned short ReadNumber();
    
    stMonthDetails FillMonthDETAILS(bool ReYeasultOfLeapYear);

    void main();

    
}