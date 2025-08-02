#include "Global/clsDate.hpp"
#include <string>

// Global: Date Class Library

namespace Global {

	// clsDate Start

	   // Constructors & Destructors

	clsDate::clsDate() {
		time_t t = time(0);                      // Get current time as time_t
		tm* now = localtime(&t);                 // Convert time_t to tm struct for local time
		_stObjDate._day = now->tm_mday;        // Set day from tm struct
		_stObjDate._month = now->tm_mon + 1;     //  (tm_mon is 0-based, so add 1)
		_stObjDate._year = now->tm_year + 1900; // (tm_year is years since 1900, so add 1900)
	}

	clsDate::clsDate(size_t day, size_t month, size_t year) {
		_stObjDate._day = day;
		_stObjDate._month = month;
		_stObjDate._year = year;
	}

	clsDate::clsDate(std::string date) {
		std::vector <std::string> SplitedDate = _objStringLib.SplitString(date, "/");
		_stObjDate._day = std::stoi(SplitedDate[0]);
		_stObjDate._month = std::stoi(SplitedDate[1]);
		_stObjDate._year = std::stoi(SplitedDate[2]);
	}

	clsDate::clsDate(std::vector <std::string> date) {
		_stObjDate._day = std::stoi(date[0]);
		_stObjDate._month = std::stoi(date[1]);
		_stObjDate._year = std::stoi(date[2]);
	}

	clsDate::~clsDate() {
		//nothing here
	}

	// Setters & Getters
	void clsDate::SetDay(size_t day) {
		_stObjDate._day = day;
	}
	size_t clsDate::GetDay() {
		return _stObjDate._day;
	}

	void clsDate::SetMonth(size_t month) {
		_stObjDate._month = month;
	}
	size_t clsDate::GetMonth() {
		return _stObjDate._month;
	}

	void clsDate::SetYear(size_t year) {
		_stObjDate._year = year;
	}
	size_t clsDate::GetYear() {
		return _stObjDate._year;
	}

	// Equations
	clsDate clsDate::GetSystemDate() {
		//system date
		time_t t = time(0);
		tm* now = localtime(&t);

		short Day, Month, Year;

		Year = now->tm_year + 1900;
		Month = now->tm_mon + 1;
		Day = now->tm_mday;

		return clsDate(Day, Month, Year);
	}


	size_t clsDate::GetDaysInMonth(size_t Month, short Year) {

		if (Month < 1 || Month > 12) return 0;

		static const size_t daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // noice

		if (Month == 2 && IsLeapYear(Year)) {
			return 29;
		}
		return daysInMonth[Month - 1];
	}

	size_t clsDate::GetDaysInMonth() {
		return GetDaysInMonth(_stObjDate._month, _stObjDate._year);
	}


	bool clsDate::IsLeapYear(short Year) {
		// Check if the year is a leap year
		return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
	}
	bool clsDate::IsLeapYear() {
		// Check if the current year is a leap year
		return IsLeapYear(_stObjDate._year);
	}


	short clsDate::NumberOfDaysInAYear(short Year) {
		// Return 366 if leap year, otherwise 365
		return IsLeapYear(Year) ? 366 : 365;
	}
	short clsDate::NumberOfDaysInAYear() {
		// Return the number of days in the current year
		return NumberOfDaysInAYear(_stObjDate._year);
	}


	size_t clsDate::NumberOfHoursInAYear(short Year) {
		// Return the number of hours in a year (24 hours * number of days)
		return NumberOfDaysInAYear(Year) * 24;
	}
	size_t clsDate::NumberOfHoursInAYear() {
		// Return the number of hours in the current year
		return NumberOfHoursInAYear(_stObjDate._year);
	}


	size_t clsDate::NumberOfMinutesInAYear(short Year) {
		// Return the number of minutes in a year (60 minutes * number of hours)
		return NumberOfHoursInAYear(Year) * 60;
	}
	size_t clsDate::NumberOfMinutesInAYear() {
		// Return the number of minutes in the current year
		return NumberOfMinutesInAYear(_stObjDate._year);
	}

	size_t clsDate::NumberOfSecondsInAYear(short Year) {
		// Return the number of seconds in a year (60 seconds * number of minutes)
		return NumberOfMinutesInAYear(Year) * 60;
	}
	size_t clsDate::NumberOfSecondsInAYear() {
		// Return the number of seconds in the current year
		return NumberOfSecondsInAYear(_stObjDate._year);
	}


	short clsDate::DayOfWeekOrder(short day, short month, short year) {
		short a, y, m;
		a = (14 - month) / 12;
		y = year - a;
		m = month + (12 * a) - 2;
		// Gregorian: 0:sun, 1:Mon, 2:Tue...etc
		return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}
	short clsDate::DayOfWeekOrder() {
		return DayOfWeekOrder(_stObjDate._day, _stObjDate._month, _stObjDate._year);
	}

	short clsDate::DaysFromTheBegginingOfTheYear(short Day, short Month, short Year) {
		short TotalDays = 0;

		for (int i = 1; i <= Month - 1; i++)
		{
			TotalDays += GetDaysInMonth(i, Year);
		}

		TotalDays += Day;

		return TotalDays;
	}
	short clsDate::DaysFromTheBegginingOfTheYear() {
		return DaysFromTheBegginingOfTheYear(_stObjDate._day, _stObjDate._month, _stObjDate._year);
	}

	bool clsDate::IsValidDate(size_t day, size_t month, size_t year) {
		if (month > 12 || month < 1) return false; // Invalid month
		if (day < 1 || day > GetDaysInMonth(month, year)) return false; // Invalid day for the month
		return true; // Valid date
	}
	bool clsDate::IsValidDate() {
		return IsValidDate(_stObjDate._day, _stObjDate._month, _stObjDate._year);
	}

	clsDate clsDate::AddDays(size_t DaysToAdd, clsDate &Date) {
		short RemainingDays = DaysToAdd + DaysFromTheBegginingOfTheYear(Date.GetDay(), Date.GetMonth(), Date.GetYear());
		short MonthDays = 0;

		Date.SetMonth(1);

		while (true)
		{
			MonthDays = GetDaysInMonth(Date.GetMonth(), Date.GetYear());

			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				Date.SetMonth(Date.GetMonth() + 1);

				if (Date.GetMonth() > 12)
				{
					Date.SetMonth(1);
					Date.SetYear(Date.GetYear() + 1);

				}
			}
			else
			{
				Date.SetDay(RemainingDays);
				break;
			}

		} return Date;

	}
	void clsDate::AddDays(size_t DaysToAdd) {
		AddDays(DaysToAdd, *this);
	}

	bool clsDate::IsDate1BeforeDate2(clsDate Date1, clsDate Date2) {
		return  (Date1.GetYear() < Date2.GetYear()) ? true : ((Date1.GetYear() == Date2.GetYear()) ? (Date1.GetMonth() < Date2.GetMonth() ? true : (Date1.GetMonth() == Date2.GetMonth() ? Date1.GetDay() < Date2.GetDay() : false)) : false);
	}
	bool clsDate::IsDateBeforeDate2(clsDate Date2) {
		return IsDate1BeforeDate2(*this, Date2);
	}

	bool clsDate::IsDate1EqualDate2(clsDate Date1, clsDate Date2) {
		return (Date1.GetYear() == Date2.GetYear() && Date1.GetMonth() == Date2.GetMonth() && Date1.GetDay() == Date2.GetDay());
	}
	bool clsDate::IsDateEqualDate2(clsDate Date2) {
		return IsDate1EqualDate2(*this, Date2);
	}

	clsDate::enDateCompare clsDate::CompareDates(clsDate Date1, clsDate Date2) {
		if (IsDate1BeforeDate2(Date1, Date2)) return enDateCompare::Before;
		else if (IsDate1EqualDate2(Date1, Date2)) return enDateCompare::Equal;
		else return enDateCompare::After;
	}
	clsDate::enDateCompare clsDate::CompareDates(clsDate Date2) {
		return CompareDates(*this, Date2);
	}

	bool clsDate::IsLastDayOfMonth(short day, short month, short year) {
		if (day == GetDaysInMonth(month, year)) return true; else return false;
	}
	bool clsDate::IsLastDayOfMonth(clsDate Date) {
		return IsLastDayOfMonth(Date.GetDay(), Date.GetMonth(), Date.GetYear());
	}
	bool clsDate::IsLastDayOfMonth() {
		return IsLastDayOfMonth(_stObjDate._day, _stObjDate._month, _stObjDate._year);
	}

	bool clsDate::IsLastMonthOfYear(short month) {
		return (month == 12);
	}
	bool clsDate::IsLastMonthOfYear() {
		return IsLastMonthOfYear(_stObjDate._month);
	}

	bool clsDate::IsWeekend(clsDate Date) {
		short DayIndex = DayOfWeekOrder(Date.GetDay(), Date.GetMonth(), Date.GetYear());
		return  (DayIndex == 5 || DayIndex == 6);
	}
	bool clsDate::IsWeekend() {
		return IsWeekend(*this);
	}

	bool clsDate::IsBusyDay(clsDate Date) {
		return (!IsWeekend(Date));
	}
	bool clsDate::IsBusyDay() {
		return (!IsWeekend(*this));
	}

	bool clsDate::IsDateBetween(clsDate Date1, clsDate Date2) {

		//Date>=To && Date<=From
		if ( (!clsDate::IsDate1BeforeDate2(Date1, Date2)  /*Is Date 1 After Date2*/ || clsDate::IsDate1EqualDate2(Date1, Date2))
			&& (clsDate::IsDate1BeforeDate2(Date1, Date2) /*Is DATE 1 Before Date2*/ || clsDate::IsDate1EqualDate2(Date1, Date2))) {
			return true;
		} return false;
	}
	bool clsDate::IsDateBetween(clsDate Date2) {
		return IsDateBetween(*this, Date2);
	}

	size_t clsDate::DaysUntilEndOfWeek(clsDate Date) {
		size_t DayOrder = DayOfWeekOrder(Date.GetDay(), Date.GetMonth(), Date.GetYear());
		return (6 - DayOrder); // 0:Sun, 1:Mon, 2:Tue...5:Fri, 6:Sat
	}
	size_t clsDate::DaysUntilEndOfWeek() { return DaysUntilEndOfWeek(*this); }

	size_t clsDate::DaysUntilEndOfMonth(clsDate Date) {
		return GetDaysInMonth(Date.GetMonth(), Date.GetYear()) - Date.GetDay();
	}
	size_t clsDate::DaysUntilEndOfMonth() {
		return DaysUntilEndOfMonth(*this);
	}

	size_t clsDate::DaysUntilEndOfYear(clsDate Date) {
		clsDate TempDate(31, 12, Date.GetYear());
		return GetDifferenceInDays(Date, TempDate, true);
	}
	size_t clsDate::DaysUntilEndOfYear() {
		return DaysUntilEndOfYear(*this);
	}

	size_t clsDate::CalculateBusinessDays(clsDate StartDate, clsDate EndDate) {
		short Days = 0;
		while (IsDate1BeforeDate2(StartDate, EndDate))
		{
			if (IsBusyDay(StartDate))
				Days++;

			StartDate = AddOneDay(StartDate);
		}

		return Days;
	}
    size_t clsDate::CalculateBusinessDays(clsDate EndDate) {
		return CalculateBusinessDays(*this, EndDate);
	}
	
	size_t clsDate::CalculateVacationDays(clsDate StartDate, clsDate EndDate) {
		return GetDifferenceInDays(StartDate, EndDate, true) - CalculateBusinessDays(StartDate, EndDate);
	}
	size_t clsDate::CalculateVacationDays(clsDate EndDate) {
		return CalculateVacationDays(*this, EndDate);
	}

	clsDate clsDate::CalculateVacationReturnDate(clsDate DateFrom, short VacationDays)
	{

		short WeekEndCounter = 0;

		for (short i = 1; i <= VacationDays; i++)
		{

			if (IsWeekend(DateFrom))
				WeekEndCounter++;

			DateFrom = AddOneDay(DateFrom);
		}
		//to add weekends 
		for (short i = 1; i <= WeekEndCounter; i++)
			DateFrom = AddOneDay(DateFrom);

		return DateFrom;
	}
	clsDate clsDate::CalculateVacationReturnDate(short VacationDays) {
		return CalculateVacationReturnDate(*this, VacationDays);
	}




	clsDate clsDate::AddOneDay(clsDate Date) {
		if (IsLastDayOfMonth(Date))
		{
			if (IsLastMonthOfYear(Date.GetMonth()))
			{
				Date.SetMonth(1);
				Date.SetDay(1);
				Date.SetYear(GetYear() + 1);
			}
			else
			{
				Date.SetDay(1);
				Date.SetMonth(GetMonth() + 1);
			}
		}
		else
		{
			Date.SetDay(GetDay() + 1);
		}

		return Date;
	}
	void clsDate::AddOneDay() {
		AddOneDay(*this);
	}

	void clsDate::SwapDates(clsDate& Date1, clsDate& Date2) {
		clsDate temp = Date1;
		Date1 = Date2;
		Date2 = temp;
	}

	size_t clsDate::GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay) {
		//this will take care of negative diff
		int Days = 0;
		short SawpFlagValue = 1;

		if (!IsDate1BeforeDate2(Date1, Date2))
		{
			//Swap Dates 
			SwapDates(Date1, Date2);
			SawpFlagValue = -1;

		}

		while (IsDate1BeforeDate2(Date1, Date2))
		{
			Days++;
			Date1 = AddOneDay(Date1);
		}

		return IncludeEndDay ? ++Days * SawpFlagValue : Days * SawpFlagValue;
	}
	size_t clsDate::GetDifferenceInDays(clsDate Date2, bool IncludeEndDay) {
		return GetDifferenceInDays(*this, Date2, IncludeEndDay);
	}

	size_t clsDate::CalculateAge(clsDate DateOfBirth) {
		clsDate CurrentDate;
		return GetDifferenceInDays(DateOfBirth, CurrentDate, true);
	}

	clsDate clsDate::IncreaseDateBy1Week(clsDate& Date) {
		for (size_t i = 1; i <= 7; i++) {
			Date = AddOneDay(Date);
		} return Date;
	}
	void clsDate::IncreaseDateBy1Week() {
		IncreaseDateBy1Week(*this);
	}

	clsDate clsDate::IncreaseDateByXWeeks(size_t NumOfWeeks, clsDate& Date) {
		for (size_t i = 1; i <= NumOfWeeks; i++) {
			Date = IncreaseDateBy1Week(Date);
		} return Date;
	}
	void clsDate::IncreaseDateByXWeeks(size_t NumOfWeeks) {
		IncreaseDateByXWeeks(NumOfWeeks, *this); //nice
	}

	clsDate clsDate::IncreaseDateBy1Month(clsDate& Date) {
		if (_stObjDate._month == 12)
		{
			_stObjDate._month = 1;
			_stObjDate._year++;
		}
		else
		{
			_stObjDate._month++;
		}

		//last check day in date should not exceed max days in the current month
		// example if date is 31/1/2022 increasing one month should not be 31/2/2022, it should
		// be 28/2/2022

		short NumberOfDaysInCurrentMonth = GetDaysInMonth(_stObjDate._month, _stObjDate._year);
		if (_stObjDate._day > NumberOfDaysInCurrentMonth)
		{
			_stObjDate._day = NumberOfDaysInCurrentMonth;
		}

		return Date;
	}
	void clsDate::IncreaseDateBy1Month() {
		IncreaseDateBy1Month(*this);
	}

	clsDate clsDate::IncreaseDateByXDays(size_t NumOfDays, clsDate& Date) {
		for (size_t i = 1; i <= NumOfDays; i++) {
			Date = AddOneDay(Date);
		} return Date;
	}
	void clsDate::IncreaseDateByXDays(size_t NumOfDays) {
		IncreaseDateByXDays(NumOfDays, *this);
	}

	clsDate clsDate::IncreaseDateByXMonths(size_t NumOfMonths, clsDate& Date) {
		for (size_t i = 1; i <= NumOfMonths; i++) {
			Date = IncreaseDateBy1Month(Date);
		} return Date;
	}
	void clsDate::IncreaseDateByXMonths(size_t NumOfMonths) {
		IncreaseDateByXMonths(NumOfMonths, *this);
	}

	clsDate clsDate::IncreaseDateBy1Year(clsDate& Date) {
		Date.SetYear(Date.GetYear() + 1); return Date;
	}
	void    clsDate::IncreaseDateBy1Year() {
		IncreaseDateBy1Year(*this);
	}

	clsDate clsDate::IncreaseDateByXYears(size_t NumOfYears, clsDate& Date) {
		Date.SetYear(Date.GetYear() + NumOfYears);
		return Date;
	}
	void    clsDate::IncreaseDateByXYears(size_t NumOfYears) {
		IncreaseDateByXYears(NumOfYears, *this);
	}

	clsDate clsDate::IncreaseDateBy1Decade(clsDate& Date)
	{
		//Period of 10 years
		Date.SetYear(Date.GetYear() + 10); return Date;
	}
	void clsDate::IncreaseDateBy1Decade() {
		IncreaseDateBy1Decade(*this);
	}

	clsDate clsDate::IncreaseDateByXDecades(size_t NumOfDecades, clsDate& Date) {
		//Period of 10 years
		Date.SetYear(Date.GetYear() + (NumOfDecades * 10)); return Date;
	}
	void clsDate::IncreaseDateByXDecades(size_t NumOfDecades) {
		IncreaseDateByXDecades(NumOfDecades, *this);
	}

	clsDate clsDate::IncreaseDateBy1Century(clsDate& Date) {
		//Period of 100 years
		Date.SetYear(Date.GetYear() + 100); return Date;
	}
	void    clsDate::IncreaseDateBy1Century() {
		IncreaseDateBy1Century(*this);
	}

	clsDate clsDate::IncreaseDateByXCenturies(size_t NumOfCenturies, clsDate& Date) {
		//Period of 100 years
		Date.SetYear(Date.GetYear() + (NumOfCenturies * 100)); return Date;
	}
	void    clsDate::IncreaseDateByXCenturies(size_t NumOfCenturies) {
		IncreaseDateByXCenturies(NumOfCenturies, *this);
	}

	clsDate clsDate::IncreaseDateBy1Millennium(clsDate& Date) {
		//Period of 1000 years
		Date.SetYear(Date.GetYear() + 1000); return Date;
	}
	void    clsDate::IncreaseDateBy1Millennium() {
		IncreaseDateBy1Millennium(*this);
	}

	clsDate clsDate::IncreaseDateByXMillenniums(size_t NumOfMillennia, clsDate& Date) {
		//Period of 1000 years
		Date.SetYear(Date.GetYear() + (NumOfMillennia * 1000)); return Date;
	}
	void    clsDate::IncreaseDateByXMillenniums(size_t NumOfMillennia) {
		IncreaseDateByXMillenniums(NumOfMillennia, *this);
	}



	clsDate clsDate::DecreaseDateBy1Day(clsDate& Date) {
		if (Date.GetDay() == 1)
		{
			if (Date.GetMonth() == 1)
			{
				Date.SetMonth(12);
				Date.SetDay(31);
				Date.SetYear(Date.GetYear() - 1);
			}
			else
			{

				Date.SetMonth(GetMonth() - 1);
				Date.SetDay(GetDaysInMonth(Date.GetMonth(), Date.GetYear()));
			}
		}
		else
		{
			Date.SetDay(Date.GetDay() - 1);
		}

		return Date;
	}
	void clsDate::DecreaseDateBy1Day() {
		DecreaseDateBy1Day(*this);
	}

	clsDate clsDate::DecreaseDateByXDays(size_t NumOfDays, clsDate& Date) {
		for (size_t i = 1; i <= NumOfDays; i++) {
			Date = DecreaseDateBy1Day(Date);
		} return Date;
	}
	void clsDate::DecreaseDateByXDays(size_t NumOfDays) {
		DecreaseDateByXDays(NumOfDays, *this);
	}

	clsDate clsDate::DecreaseDateBy1Week(clsDate& Date) {
		for (size_t i = 1; i <= 7; i++) {
			Date = DecreaseDateBy1Day(Date);
		} return Date;
	}
	void clsDate::DecreaseDateBy1Week() {
		DecreaseDateBy1Week(*this);
	}

	clsDate clsDate::DecreaseDateByXWeeks(size_t NumOfWeeks, clsDate& Date) {
		for (size_t i = 1; i <= NumOfWeeks; i++) {
			Date = DecreaseDateBy1Week(Date);
		} return Date;
	}
	void clsDate::DecreaseDateByXWeeks(size_t NumOfWeeks) {
		DecreaseDateByXWeeks(NumOfWeeks, *this);
	}

	clsDate clsDate::DecreaseDateBy1Month(clsDate& Date) {
		if (Date.GetMonth() == 1)
		{
			Date.SetMonth(12);
			Date.SetYear(Date.GetYear() - 1);
		}
		else Date.SetMonth(Date.GetMonth() - 1);

		//last check day in date should not exceed max days in the current month
		// example if date is 31/1/2022 decreasing one month should not be 31/12/2022, it should
		// be 30/12/2022
		short NumberOfDaysInCurrentMonth = GetDaysInMonth(Date.GetMonth(), Date.GetYear());
		if (Date.GetDay() > NumberOfDaysInCurrentMonth)
		{
			Date.SetDay(NumberOfDaysInCurrentMonth);
		}
		return Date;
	}
	void clsDate::DecreaseDateBy1Month() {
		DecreaseDateBy1Month(*this);
	}

	clsDate clsDate::DecreaseDateByXMonths(size_t NumOfMonths, clsDate& Date) {
		for (size_t i = 1; i <= NumOfMonths; i++) {
			Date = DecreaseDateBy1Month(Date);
		} return Date;
	}
	void clsDate::DecreaseDateByXMonths(size_t NumOfMonths) {
		DecreaseDateByXMonths(NumOfMonths, *this);
	}

	clsDate clsDate::DecreaseDateBy1Year(clsDate& Date) {
		Date.SetYear(Date.GetYear() - 1); return Date;
	}
	void clsDate::DecreaseDateBy1Year() {
		DecreaseDateBy1Year(*this);
	}

	clsDate clsDate::DecreaseDateByXYears(size_t NumOfYears, clsDate& Date) {
		Date.SetYear(Date.GetYear() - NumOfYears); return Date;
	}
	void clsDate::DecreaseDateByXYears(size_t NumOfYears) {
		DecreaseDateByXYears(NumOfYears, *this);
	}

	clsDate clsDate::DecreaseDateBy1Decade(clsDate& Date) {
		//Period of 10 years
		Date.SetYear(Date.GetYear() - 10); return Date;
	}
	void clsDate::DecreaseDateBy1Decade() {
		DecreaseDateBy1Decade(*this);
	}

	clsDate clsDate::DecreaseDateByXDecades(size_t NumOfDecades, clsDate& Date) {
		//Period of 10 years
		Date.SetYear(Date.GetYear() - (NumOfDecades * 10)); return Date;
	}
	void clsDate::DecreaseDateByXDecades(size_t NumOfDecades) {
		DecreaseDateByXDecades(NumOfDecades, *this);
	}

	clsDate clsDate::DecreaseDateBy1Century(clsDate& Date) {
		//Period of 100 years
		Date.SetYear(Date.GetYear() - 100); return Date;
	}
	void clsDate::DecreaseDateBy1Century() {
		DecreaseDateBy1Century(*this);
	}

	clsDate clsDate::DecreaseDateByXCenturies(size_t NumOfCenturies, clsDate& Date) {
		//Period of 100 years
		Date.SetYear(Date.GetYear() - (NumOfCenturies * 100)); return Date;
	}
	void clsDate::DecreaseDateByXCenturies(size_t NumOfCenturies) {
		DecreaseDateByXCenturies(NumOfCenturies, *this);
	}

	clsDate clsDate::DecreaseDateBy1Millennium(clsDate& Date) {
		//Period of 1000 years
		Date.SetYear(Date.GetYear() - 1000); return Date;
	}
	void clsDate::DecreaseDateBy1Millennium() {
		DecreaseDateBy1Millennium(*this);
	}

	clsDate clsDate::DecreaseDateByXMillenniums(size_t NumOfMillennia, clsDate& Date) {
		//Period of 1000 years
		Date.SetYear(Date.GetYear() - (NumOfMillennia * 1000)); return Date;
	}
	void clsDate::DecreaseDateByXMillenniums(size_t NumOfMillennia) {
		DecreaseDateByXMillenniums(NumOfMillennia, *this);
	}



	// Strings
	std::string clsDate::DayShortName(short DayOfWeekOrder) {
		std::string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return arrDayNames[DayOfWeekOrder];
	}
	std::string clsDate::DayShortName(short day, short month, short year) {
		return DayShortName(DayOfWeekOrder(day, month, year));
	}
	std::string clsDate::DayShortName() {
		return DayShortName(_stObjDate._day, _stObjDate._month, _stObjDate._year);
	}

	std::string clsDate::MonthShortName(size_t month) {
		std::string arrMonthNames[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
		return arrMonthNames[month - 1];
	}
	std::string clsDate::MonthShortName() {
		return MonthShortName(_stObjDate._month);
	}

	std::string clsDate::DateToString() {
		return (std::to_string(_stObjDate._day) + '/' + std::to_string(_stObjDate._month) + '/' + std::to_string(_stObjDate._year));
	}

	// Printing
	void clsDate::PrintDate() {
		std::cout << "Date: " << DateToString() << std::endl;
	}

	void clsDate::PrintMonthCalendar(short Month, short Year) {
		int NumberOfDays;

		// Index of the day from 0 to 6
		int current = DayOfWeekOrder(1, Month, Year);

		NumberOfDays = GetDaysInMonth(Month, Year);

		// Print the current month name
		printf("\n  _______________%s_______________\n\n",
			MonthShortName(Month).c_str());

		// Print the columns
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		// Print appropriate spaces
		int i;
		for (i = 0; i < current; i++)
			printf("     ");

		for (int j = 1; j <= NumberOfDays; j++)
		{
			printf("%5d", j);


			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}

		printf("\n  _________________________________\n");
	}
	void clsDate::PrintMonthCalendar() {
		PrintMonthCalendar(_stObjDate._month, _stObjDate._year);
	}

	void clsDate::PrintYearCalendar(short Year) {
		printf("\n  _________________________________\n\n");
		printf("           Calendar - %d\n", Year);
		printf("  _________________________________\n");


		for (int i = 1; i <= 12; i++)
		{
			PrintMonthCalendar(i, Year);
		}

	}
	void clsDate::PrintYearCalendar() {
		PrintYearCalendar(_stObjDate._year);
	}

	// clsDate End

}

// Global: Date Class Library
