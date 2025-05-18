#pragma once
#include <iostream>
#include <string>
#include <optional>
using namespace std;

namespace Problem55 {

	struct sDate;

	bool IsLeapYear(unsigned short year);

	short DayOfWeekOrder(short Day, short Month, short Year);

	short DayOfWeekOrder(sDate Date);

	bool IsWeekEnd(sDate Date);

	bool IsBusinessDay(sDate Date);

	short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

	optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2);

	bool IsItTheLastDayInMonth(sDate Date);

	bool IsItTheLastMonthInTheYear(unsigned short month);

	sDate IncreaseDateByOneDay(sDate Date);

	string DayShortName(short DayOfWeekOrder);

	string DateAsString(sDate Date);

	sDate CalculateVacationReturnDate(sDate VacationStart, unsigned short VacationPeriod);

	unsigned short ReadNumber(string message);

	sDate ReadDateInfo();

	void main();
}