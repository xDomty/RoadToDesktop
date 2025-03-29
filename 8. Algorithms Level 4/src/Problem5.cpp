#include "../include/Problem5.hpp"

namespace Find{
    short FindNumberPositionInArrayButOnlyOnce(short NumberToSearch, short arr[100], int ArrayLength)
    {
        for (int i = 0; i < ArrayLength; i++)
        {
            if (arr[i] == NumberToSearch)
               return i;
        }
        return -1;
    }
    
    bool IsNumberInArray(short NumberToSearch, short arr[100], int ArrayLength)
    {
        return FindNumberPositionInArrayButOnlyOnce(NumberToSearch,arr, ArrayLength) != -1;
    }
}

namespace Problem5{
    
    struct stMonthDetails{
        short DAYS;
        short HOURS;
        int MINUTES;
        int SECONDS;
    };
   
    bool IsLeapYear(unsigned short year){
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }
    
    unsigned short ReadNumber(string message){
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }
    
    stMonthDetails FillMonthDETAILS(bool LeapYear, unsigned short WhatMonthToCheckDetails){
        short _31DaysMonths[7] = {1,3,5,7,8,10,12};
        short _30DaysMonths[4] = {4,6,9,11};
        int MonthFeburaryDays;

        if (LeapYear) MonthFeburaryDays = 29;
        else MonthFeburaryDays = 28;

        stMonthDetails MonthDetails;

        if (WhatMonthToCheckDetails == 2){
            MonthDetails.DAYS    =                          MonthFeburaryDays ;
            MonthDetails.HOURS   = Convert::DaysTo::Hours  (MonthFeburaryDays);
            MonthDetails.MINUTES = Convert::DaysTo::Minutes(MonthFeburaryDays);
            MonthDetails.SECONDS = Convert::DaysTo::Seconds(MonthFeburaryDays);
        }
        else if (Find::IsNumberInArray(WhatMonthToCheckDetails,_30DaysMonths,4)){
            MonthDetails.DAYS    =                          30 ;
            MonthDetails.HOURS   = Convert::DaysTo::Hours  (30);
            MonthDetails.MINUTES = Convert::DaysTo::Minutes(30);
            MonthDetails.SECONDS = Convert::DaysTo::Seconds(30);
        }
        else if (Find::IsNumberInArray(WhatMonthToCheckDetails,_31DaysMonths,7)){
            MonthDetails.DAYS    =                          31 ;
            MonthDetails.HOURS   = Convert::DaysTo::Hours  (31);
            MonthDetails.MINUTES = Convert::DaysTo::Minutes(31);
            MonthDetails.SECONDS = Convert::DaysTo::Seconds(31);
        }
        else cout << "\nERROR : MONTH NOT FOUND !!";
        
        return MonthDetails;
    }

    bool IsMonthDetailsStructEmpty(stMonthDetails MonthDetails){
        return !(MonthDetails.DAYS == 0 && MonthDetails.HOURS == 0 && MonthDetails.MINUTES == 0 && MonthDetails.SECONDS == 0);
    }

    void main(){
      stMonthDetails MonthDetails;
      
      unsigned short TheYear  =  ReadNumber("Enter the year? " );
      unsigned short TheMonth =  ReadNumber("Enter the month? ");

      MonthDetails = FillMonthDETAILS(IsLeapYear(TheYear), TheMonth);

      if (IsMonthDetailsStructEmpty(MonthDetails)){
        cout << endl;
        cout << "Number of " << "days    = " << MonthDetails.DAYS    << endl;
        cout << "Number of " << "hours   = " << MonthDetails.HOURS   << endl;
        cout << "Number of " << "minutes = " << MonthDetails.MINUTES << endl;
        cout << "Number of " << "seconds = " << MonthDetails.SECONDS << endl;
      }
    }
}