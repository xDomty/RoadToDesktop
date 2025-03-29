#include "../include/Problem2.hpp"

namespace Problem2{
    
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

    void main(){
        unsigned short year = ReadNumber();
        cout << IsLeapYear(year);
    }
}