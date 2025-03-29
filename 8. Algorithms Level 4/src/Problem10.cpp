#include "../include/Problem10.hpp"
using namespace std;

namespace Problem10{

    bool IsLeapYear(unsigned short year){
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear){
        if (month < 1 || month > 12) return 0;
        short NumberOfDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
     }

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day){
        short TotalDays = 0;
        for (short i = 1; i < Month; i++) TotalDays += NumberOfDaysInAMonth(i,IsLeapYear(Year));
        TotalDays += Day; return TotalDays;
    }
    
    unsigned short ReadNumber(string message){
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }

    void main(){
        short Year = ReadNumber("Enter the year? ");
        short Month = ReadNumber("Enter the month? ");
        short Day = ReadNumber("Enter the day? ");

        cout << endl;

        cout << "The total days from the beggining of the year is : " << TotalDaysFromTheBegginingOfTheYear(Year,Month,Day);
    }
}