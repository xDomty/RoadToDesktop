#include "../include/Problem6.hpp"

namespace FindThe{
    short NumberPositionInArrayButOnlyOnce(short NumberToSearch, short arr[100], int ArrayLength)
    {
        for (int i = 0; i < ArrayLength; i++)
        {
            if (arr[i] == NumberToSearch)
               return i;
        }
        return -1;
    }
    
    bool IsThatNumberInArray(short NumberToSearch, short arr[100], int ArrayLength)
    {
        return NumberPositionInArrayButOnlyOnce(NumberToSearch,arr, ArrayLength) != -1;
    }
}

namespace Problem6{
    
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
    
    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear){
       if (month < 1 || month > 12) return 0;
       short NumberOfDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
       return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];

    }

    stMonthDetails FillMonthDETAILS(bool LeapYear, unsigned short month){
        int MonthDays = NumberOfDaysInAMonth(month, LeapYear);
        stMonthDetails MonthDetails;

        MonthDetails.DAYS    =                          MonthDays ;
        MonthDetails.HOURS   = Convert::DaysTo::Hours  (MonthDays);
        MonthDetails.MINUTES = Convert::DaysTo::Minutes(MonthDays);
        MonthDetails.SECONDS = Convert::DaysTo::Seconds(MonthDays);
       
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