#include "../include/Problem47-53.hpp"

namespace Problem47To53 {
    struct sDate {
		short Year;
		short Month;
		short Day;
    };

	bool IsLeapYear(unsigned short year) {
		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	}

    short DayOfWeekOrder(short Day, short Month, short Year)
    {
        short a, y, m;
        a = (14 - Month) / 12;
        y = Year - a;
        m = Month + (12 * a) - 2;
        return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }

	short DayOfWeekOrder(sDate Date)
	{
		return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
	}

	bool IsEndOfWeek(short DayOrder)
	{
		return (DayOrder == 6);
	}

	bool IsEndOfWeek(sDate Date)
	{
		return IsEndOfWeek(DayOfWeekOrder(Date));
	}

	bool IsWeekEnd(short DayOrder)
	{
		return (DayOrder == 5 || DayOrder == 6);
	}

	bool IsWeekEnd(sDate Date)
	{
		short DayOrder = DayOfWeekOrder(Date);
		return (DayOrder == 5 || DayOrder == 6);
	}
	
	bool IsBusinessDay(sDate Date)
	{
		return !IsWeekEnd(Date);
	}

	short DaysUntilTheEndOfWeek(sDate Date)
	{
		return 6 - DayOfWeekOrder(Date);
	}

	short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear) {
		if (month < 1 || month > 12) return 0;
		short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
	}

	void SwapDates(sDate& Date1, sDate& Date2)
	{
		sDate TempDate;

		TempDate.Year = Date1.Year;
		TempDate.Month = Date1.Month;
		TempDate.Day = Date1.Day;

		Date1.Year = Date2.Year;
		Date1.Month = Date2.Month;
		Date1.Day = Date2.Day;

		Date2.Year = TempDate.Year;
		Date2.Month = TempDate.Month;
		Date2.Day = TempDate.Day;
	}

	optional <bool> IsDate1BeforeDate2(sDate Date1, sDate Date2)
	{
		if (Date1.Year < Date2.Year)   return true;
		if (Date1.Year > Date2.Year)   return false;
		if (Date1.Month < Date2.Month) return true;
		if (Date1.Month > Date2.Month) return false;
		if (Date1.Day == Date2.Day)    return nullopt;
		else return (Date1.Day < Date2.Day);
	}

	bool IsItTheLastDayInMonth(sDate Date) {
		return (Date.Day == NumberOfDaysInAMonth(Date.Month, IsLeapYear(Date.Year)));
	}

	bool IsItTheLastMonthInTheYear(unsigned short month) {
		return month == 12;
	}

	sDate IncreaseDateByOneDay(sDate Date)
	{
		if (IsItTheLastDayInMonth(Date))
		{
			if (IsItTheLastMonthInTheYear(Date.Month))
			{
				Date.Month = 1;
				Date.Day = 1;
				Date.Year++;
			}
			else
			{
				Date.Day = 1;
				Date.Month++;
			}
		}
		else
		{
			Date.Day++;
		}
		return Date;
	}

	int GetDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
	{
		int Days = 0;
		short SawpFlagValue = 1;

		if (IsDate1BeforeDate2(Date1, Date2) == false)
		{
			//Swap Dates
			SwapDates(Date1, Date2);
			SawpFlagValue = -1;
		}
		while (IsDate1BeforeDate2(Date1, Date2) == true)
		{
			Days++;
			Date1 = IncreaseDateByOneDay(Date1);
		}

		return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
	}

	short DaysUntilTheEndOfMonth(sDate Date1)
	{
		sDate EndOfMontDate;
		EndOfMontDate.Day = NumberOfDaysInAMonth(Date1.Month, Date1.Year);
		EndOfMontDate.Month = Date1.Month;
		EndOfMontDate.Year = Date1.Year;
		return GetDifferenceInDays(Date1, EndOfMontDate, true);
	}
	short DaysUntilTheEndOfYear(sDate Date1)
	{
		sDate EndOfYearDate;
		EndOfYearDate.Day = 31;
		EndOfYearDate.Month = 12;
		EndOfYearDate.Year = Date1.Year;
		return GetDifferenceInDays(Date1, EndOfYearDate, true);
	}

	sDate GetSystemDate()
	{
		sDate Date;
		time_t t = time(0);
		tm* now = localtime(&t);
		Date.Year = now->tm_year + 1900;
		Date.Month = now->tm_mon + 1;
		Date.Day = now->tm_mday;
		return Date;
	}

	string DayShortName(short DayOfWeekOrder)
	{
		string arrDayNames[] = {
		"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return arrDayNames[DayOfWeekOrder];
	}

	string DateAsString(sDate Date) {
		return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
	}

	void main() {
		sDate Date1 = GetSystemDate();
		cout << "\nToday is " << DayShortName(DayOfWeekOrder(Date1)) << " , " << DateAsString(Date1) << ".\n";
		
		cout << "\nIs it End of Week ?";
		if (IsEndOfWeek(Date1)) cout << "Yes it is Saturday, it's of Week.";
		else cout << "No it's Not end of week.";

		cout << "\n\nIs it Weekend? ";
		if (IsWeekEnd(Date1)) cout << "Yes it is a week end.";
		else cout << "No today is " << DayShortName(DayOfWeekOrder(Date1)) << ", Not a weekend.";
		

		cout << "\n\nIs it Business Day?\n";
		if (IsBusinessDay(Date1)) cout << "Yes it is a business day.";
		else cout << "No it is NOT a business day.";

		cout << "\n\nDays until end of week : " << DaysUntilTheEndOfWeek(Date1) << " Day(s).";

		cout << "\nDays until end of month : " << DaysUntilTheEndOfMonth(Date1) << " Day(s).";

		cout << "\nDays until end of year : " << DaysUntilTheEndOfYear(Date1) << " Day(s).";
	}
}