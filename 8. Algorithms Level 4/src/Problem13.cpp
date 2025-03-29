#include "../include/Problem13.hpp"

namespace Problem13 {

    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2)
    {
        if (Date1.Year < Date2.Year)   return true;
        if (Date1.Year > Date2.Year)   return false;
        if (Date1.Month < Date2.Month) return true;
        if (Date1.Month > Date2.Month) return false;
        if (Date1.Day == Date2.Day)    return nullopt;
        else return (Date1.Day < Date2.Day);
    }

    unsigned short ReadNumber(string message) {
        unsigned short Number;
        cout << message;
        cin >> Number;
        return Number;
    }


    sDate ReadDateInfo() {
        sDate Date;

        Date.Year = ReadNumber("Enter the year? ");
        Date.Month = ReadNumber("Enter the month? ");
        Date.Day = ReadNumber("Enter the day? ");

        return Date;
    }

    void main() {
        cout << "Please enter the info of date 1 :\n";
        sDate Date1 = ReadDateInfo();  cout << endl << endl;

        cout << "Please enter the info of date 2 : \n";
        sDate Date2 = ReadDateInfo();  cout << endl << endl;

        if (IsDate1BeforeDate2(Date1, Date2) == true) cout << "Date 1 is before date 2 :)";
        else if (IsDate1BeforeDate2(Date1 , Date2) == false) cout << "Date 2 is before date 1 :)";
        else cout << "Date 2 = Date 1";
    }
}