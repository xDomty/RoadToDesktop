#pragma once
#include <iostream>
using namespace std;


namespace Problem4{
    struct stYearDetails;
   
    bool IsLeapYear(unsigned short year);
    
    unsigned short ReadNumber();
    
    stYearDetails FillDETAILS(bool ResultOfLeapYear);

    void main();
}