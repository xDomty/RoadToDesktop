#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Problem20To32 {

    struct sDate;

    bool IsLeapYear(unsigned short year);

    short NumberOfDaysInAMonth(short month, bool IsItLeapYear);

    short TotalDaysFromTheBegginingOfTheYear(short Year, short Month, short Day);

    unsigned short ReadNumber(string message);

    sDate ReadDateInfo();

    bool IsItTheLastDayInMonth(sDate Date);

    bool IsItTheLastMonthInTheYear(short month);

    sDate IncreaseDateByOneDay(sDate Date);

    sDate AddXDaysToDate(unsigned int Days, sDate Date);

    sDate Add1WeekToDate(sDate Date);

    sDate AddXWeeksToDate(unsigned int Weeks, sDate Date);

    sDate Add1MonthToDate(sDate Date);

    sDate AddXMonthsToDate(unsigned int Months, sDate Date);

    sDate IncreaseDateBy1Year(sDate Date);

    sDate IncreaseDateByXYears(unsigned int Years, sDate Date);

    sDate IncreaseDateByXYearsFaster(unsigned int Years, sDate Date);

    sDate IncreaseDateBy1Decade(sDate Date);

    sDate IncreaseDateBy1DecadeFaster(sDate Date);

    sDate IncreaseDateByXDecades(unsigned int Decades, sDate Date);

    sDate IncreaseDateByXDecadesFaster(unsigned int Decades, sDate Date);

    sDate IncreaseDateBy1Century(sDate Date);

    sDate IncreaseDateBy1CenturyFaster(sDate Date);

    sDate IncreaseDateByXCenturies(unsigned int Centuries, sDate Date);

    sDate IncreaseDateByXCenturiesFaster(unsigned int Centuries, sDate Date);

    sDate IncreaseDateBy1Millennium(sDate Date);

    sDate IncreaseDateBy1MillenniumFaster(sDate Date);

    string DateAsString(sDate Date);

    void main();
}