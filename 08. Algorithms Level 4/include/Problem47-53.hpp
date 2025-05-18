#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <optional>

using namespace std;

namespace Problem47To53 {

	struct sDate;

	bool IsLeapYear(unsigned short year);

	short DayOfWeekOrder(short Day, short Month, short Year);

	short DayOfWeekOrder(sDate Date);

	bool IsEndOfWeek(short DayOrder);

	bool IsEndOfWeek(sDate Date);

	bool IsWeekEnd(short DayOrder);

	bool IsWeekEnd(sDate Date);

	bool IsBusinessDay(sDate Date);

	short DaysUntilTheEndOfWeek(sDate Date);

	short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear);

	void SwapDates(sDate& Date1, sDate& Date2);

	optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2);

	bool IsItTheLastDayInMonth(sDate Date);

	bool IsItTheLastMonthInTheYear(unsigned short month);

	sDate IncreaseDateByOneDay(sDate Date);

	int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay);

	short DaysUntilTheEndOfMonth(sDate Date1);

	short DaysUntilTheEndOfYear(sDate Date1);

	sDate GetSystemDate();

	string DayShortName(short DayOfWeekOrder);

	string DateAsString(sDate Date);

	void main();

}