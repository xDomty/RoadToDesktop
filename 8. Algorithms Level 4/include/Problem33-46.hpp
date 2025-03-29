#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Problem33To46 {

    struct sDate;

    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(short month, bool IsItLeapYear);

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day);

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    bool IsItTheLastDayInMonth(sDate Date);

    bool IsItTheLastMonthInTheYear(short month);

    sDate DecreaseDateByOneDay(sDate Date);

    sDate DecreaseDateByXDays(unsigned int ValueOfX, sDate Date);

    sDate DecreaseDateBy1Week(sDate Date);

    sDate DecreaseDateByXWeeks(unsigned int ValueOfX, sDate Date);

    sDate DecreaseDateBy1Month(sDate Date);

    sDate DecreaseDateByXMonths(unsigned int ValueOfX, sDate Date);

    sDate DecreaseDateBy1Year(sDate Date);

    sDate DecreaseDateByXYears(unsigned int ValueOfX, sDate Date);

    sDate DecreaseDateByXYearsFaster(unsigned int ValueOfX, sDate Date);

    sDate DecreaseDateBy1Decade(sDate Date);

    sDate DecreaseDateByXDecades(unsigned int Decades, sDate Date);

    sDate DecreaseDateByXDecadesFaster(unsigned int Decades, sDate Date);

    sDate DecreaseDateBy1Century(sDate Date);

    sDate DecreaseDateBy1CenturyFaster(sDate Date);

    sDate DecreaseDateByXCenturies(unsigned int Centuries, sDate Date);

    sDate DecreaseDateByXCenturiesFaster(unsigned int Centuries, sDate Date);

    sDate DecreaseDateBy1Millennium(sDate Date);

    sDate DecreaseDateBy1MillenniumFaster(sDate Date);

    string DateAsString(sDate Date);

    void main();
}