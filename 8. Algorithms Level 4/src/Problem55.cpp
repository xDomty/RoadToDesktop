#include "../include/Problem55.hpp"

namespace Problem55 {

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

	bool IsWeekEnd(sDate Date)
	{
		short DayOrder = DayOfWeekOrder(Date);
		return (DayOrder == 5 || DayOrder == 6);
	}

	bool IsBusinessDay(sDate Date)
	{
		return !IsWeekEnd(Date);
	}

	short NumberOfDaysInAMonth(unsigned short month, bool IsItLeapYear) {
		if (month < 1 || month > 12) return 0;
		short NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (month == 2) ? (IsItLeapYear ? 29 : 28) : NumberOfDays[month - 1];
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

	string DayShortName(short DayOfWeekOrder)
	{
		string arrDayNames[] = {
		"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return arrDayNames[DayOfWeekOrder];
	}

	string DateAsString(sDate Date) {
		return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
	}

	sDate CalculateVacationReturnDate(sDate VacationStart, unsigned short VacationPeriod) {
		unsigned short TempVacationPeriodCounter = 0;
		sDate DateCounter = VacationStart;

		while (TempVacationPeriodCounter != VacationPeriod) {
			if (IsBusinessDay(DateCounter)) TempVacationPeriodCounter++;
			DateCounter = IncreaseDateByOneDay(DateCounter);
		}

		sDate VacationEnd = DateCounter; return VacationEnd;
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
		cout << "\nVacation Starts: "; sDate DateFrom = ReadDateInfo();
		unsigned short VacationPeriod = ReadNumber("Enter the vacation period in days? ");

		sDate DateTo = CalculateVacationReturnDate(DateFrom, VacationPeriod);

		cout << endl;
		cout << "Vaction Start: " << DayShortName(DayOfWeekOrder(DateFrom)) << " , " << DateAsString(DateFrom) << endl;
		cout << "Vaction Ends : " << DayShortName(DayOfWeekOrder(DateTo)) << " , " << DateAsString(DateTo) << endl;
	}
}