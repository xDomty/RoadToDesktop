#include "../include/Problem33-46.hpp"

namespace Problem33To46 {

    struct sDate
    {
        short Year;
        short Month;
        short Day;
    };

    bool IsLeapYear(unsigned short year) {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    short NumberOfDaysInAMonth(short month, bool IsItLeapYear) {
        if (month < 1 || month > 12) return 0;
        short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
    }

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day) {
        short TotalDays = 0;
        for (short i = 1; i < Month; i++) TotalDays += NumberOfDaysInAMonth(i, IsLeapYear(Year));
        TotalDays += Day; return TotalDays;
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

    bool IsItTheLastDayInMonth(sDate Date) {
        return (Date.Day == NumberOfDaysInAMonth(Date.Month, IsLeapYear(Date.Year)));
    }

    bool IsItTheLastMonthInTheYear(short month) {
        return month == 12;
    }

    sDate DecreaseDateByOneDay(sDate Date)
    {
        if (Date.Day == 1) {
            if (Date.Month == 1) {
                Date.Month = 12;
                Date.Day = 31;
                Date.Year--;
            }
            else {
                Date.Month--;
                Date.Day = NumberOfDaysInAMonth(Date.Month, IsLeapYear(Date.Year));  
            }
        }
        else {
            Date.Day--;
        }
        return Date;
    }

    sDate DecreaseDateByXDays(unsigned int ValueOfX,sDate Date) {
        for (unsigned int i = 1; i <= ValueOfX; i++) {
            Date = DecreaseDateByOneDay(Date);
        } return Date;
    }

    sDate DecreaseDateBy1Week(sDate Date) {
        return DecreaseDateByXDays(7, Date);
    }

    sDate DecreaseDateByXWeeks(unsigned int ValueOfX,sDate Date) {
        for (unsigned int i = 1; i <= ValueOfX; i++) {
            Date = DecreaseDateBy1Week(Date);
        } return Date;
    }

    sDate DecreaseDateBy1Month(sDate Date) {
        if (Date.Month == 1) {
            Date.Month = 12;
            Date.Year--;
        }
        else {
            Date.Month--;
        }

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (Date.Day > NumberOfDaysInCurrentMonth) Date.Day = NumberOfDaysInCurrentMonth;
        return Date;
    }

    sDate DecreaseDateByXMonths(unsigned int ValueOfX,sDate Date) {
        for (unsigned int i = 1; i <= ValueOfX; i++) {
            Date = DecreaseDateBy1Month(Date);
        } return Date;
    }

    sDate DecreaseDateBy1Year(sDate Date) {
        Date.Year--;
        return Date;
    }

    sDate DecreaseDateByXYears(unsigned int ValueOfX, sDate Date) {
        for (unsigned int i = 1; i <= ValueOfX; i++) {
            Date = DecreaseDateBy1Year(Date);
        } return Date;
    }

    sDate DecreaseDateByXYearsFaster(unsigned int ValueOfX, sDate Date) {
        Date.Year -= ValueOfX; return Date;
    }

    sDate DecreaseDateBy1Decade(sDate Date) {
        return DecreaseDateByXYears(10, Date);
    }
    
    sDate DecreaseDateByXDecades(unsigned int Decades, sDate Date) {
        return DecreaseDateByXYears(10 * Decades, Date);
    }

    sDate DecreaseDateByXDecadesFaster(unsigned int Decades, sDate Date) {
        return DecreaseDateByXYearsFaster(10 * Decades, Date);
    }

    sDate DecreaseDateBy1Century(sDate Date) {
        return DecreaseDateByXYears(100, Date);
    }

    sDate DecreaseDateBy1CenturyFaster(sDate Date) {
        return DecreaseDateByXYearsFaster(100, Date);
    }

    sDate DecreaseDateByXCenturies(unsigned int Centuries, sDate Date) {
        return DecreaseDateByXYears(100 * Centuries, Date);
    }

    sDate DecreaseDateByXCenturiesFaster(unsigned int Centuries, sDate Date) {
        return DecreaseDateByXYearsFaster(100 * Centuries, Date);
    }

    sDate DecreaseDateBy1Millennium(sDate Date) {
        return DecreaseDateByXYears(1000, Date);
    }

    sDate DecreaseDateBy1MillenniumFaster(sDate Date) {
        return DecreaseDateByXYearsFaster(1000, Date);
    }

    string DateAsString(sDate Date) {
        return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
    }

    void main() {
        sDate Date = ReadDateInfo();
        cout << "\nDate After: \n";

        Date = DecreaseDateByOneDay(Date);
        cout << "\n01-Decreasing one day is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXDays(10, Date);
        cout << "\n02-Decreasing 10 days is: " << DateAsString(Date) << endl;

        Date = DecreaseDateBy1Week(Date);
        cout << "\n03-Decreasing one week is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXWeeks(10, Date);
        cout << "\n04-Decreasing 10 weeks is: " << DateAsString(Date) << endl;

        Date = DecreaseDateBy1Month(Date);
        cout << "\n05-Decreasing one month is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXMonths(5, Date);
        cout << "\n06-Decreasing 5 months is: " << DateAsString(Date) << endl;

        Date = DecreaseDateBy1Year(Date);
        cout << "\n07-Decreasing one year is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXYears(10, Date);
        cout << "\n08-Decreasing 10 Years is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXYearsFaster(10, Date);
        cout << "\n09-Decreasing 10 Years (faster) is: " << DateAsString(Date) << endl;

        Date = DecreaseDateBy1Decade(Date);
        cout << "\n10-Decreasing one Decade is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXDecades(10, Date);
        cout << "\n11-Decreasing 10 Decades is: " << DateAsString(Date) << endl;

        Date = DecreaseDateByXDecadesFaster(10, Date);
        cout << "\n12-Decreasing 10 Decade (faster) is: " << DateAsString(Date) << endl;

        Date = DecreaseDateBy1Century(Date);
        cout << "\n13-Decreasing One Century is: " << DateAsString(Date) << endl;

        Date = DecreaseDateBy1Millennium(Date);
        cout << "\n14-Decreasing One Millennium is: " << DateAsString(Date) << endl;
    }
}