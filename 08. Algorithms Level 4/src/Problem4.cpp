#include "../include/Problem4.hpp"

namespace Problem4{
         struct stYearDetails{
            short DAYS;
            short HOURS;
            int MINUTES;
            int SECONDS;
         };
        
         bool IsLeapYear(unsigned short year){
            return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
         }
         
         unsigned short ReadNumber()
         {
             unsigned short Number;
             cout << "\nEnter the year? ";
             cin >> Number;
             return Number;
         }
         
         stYearDetails FillDETAILS(bool LeapYear){
            stYearDetails YearDetails;
        
            if (LeapYear){
               YearDetails.DAYS    = 366     ;
               YearDetails.MINUTES = 527040  ;
               YearDetails.HOURS   = 8784    ;
               YearDetails.SECONDS = 31622400;
            } else {
               YearDetails.DAYS    = 365     ;
               YearDetails.HOURS   = 8760    ;
               YearDetails.MINUTES = 525600  ;
               YearDetails.SECONDS = 51536000;
            }

            return YearDetails;
         }

         void main(){
            unsigned short year = ReadNumber();
            stYearDetails YearDetails = FillDETAILS(IsLeapYear(year));
            cout << endl;
            cout << "Number of " << "days    = " << YearDetails.DAYS    << endl;
            cout << "Number of " << "hours   = " << YearDetails.HOURS   << endl;
            cout << "Number of " << "minutes = " << YearDetails.MINUTES << endl;
            cout << "Number of " << "seconds = " << YearDetails.SECONDS << endl;
            
         } 
}