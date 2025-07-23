#pragma once
#pragma warning(disable : 4996)
#include "../Project02/StringLib.hpp"
#include <iostream>

// Project03: Date Library Project

namespace Project03 {

	class clsDate {

	private:
		struct _stDate {
           size_t _day   = 1    ; 
		   size_t _month = 1    ;
		   size_t _year  = 1900 ;
		};

		_stDate _stObjDate;
		Project02::clsStringLib _objStringLib;

	public:

		// Constructors & Destructors
		   clsDate();
		   clsDate(size_t day, size_t month, size_t year);
		   clsDate(std::string date);
		   clsDate(std::vector <std::string> date);
		   
		   ~clsDate();

		// Setters & Getters
		   void SetDay(size_t day);
		   size_t GetDay();

		   void SetMonth(size_t month);
		   size_t GetMonth();

		   void SetYear(size_t year);
		   size_t GetYear();

		// Equations
		   clsDate GetSystemDate();

		   size_t GetDaysInMonth(size_t Month, short Year);
		   size_t GetDaysInMonth();

		   bool IsLeapYear(short Year);
           bool IsLeapYear();

		   short NumberOfDaysInAYear(short Year);
		   short NumberOfDaysInAYear();

		   size_t NumberOfHoursInAYear(short Year);
		   size_t NumberOfHoursInAYear();

		   size_t NumberOfMinutesInAYear(short Year);
		   size_t NumberOfMinutesInAYear();

		   size_t NumberOfSecondsInAYear(short Year);
		   size_t NumberOfSecondsInAYear();

		   short DayOfWeekOrder(short day, short month, short year);
		   short DayOfWeekOrder();

		   short DaysFromTheBegginingOfTheYear(short Day, short Month, short Year);
		   short DaysFromTheBegginingOfTheYear();

		   bool IsValidDate(size_t day, size_t month, size_t year);
		   bool IsValidDate();

		   clsDate AddDays(size_t DaysToAdd, clsDate &Date);
		   void AddDays(size_t DaysToAdd);

		   bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2);
		   bool IsDateBeforeDate2(clsDate Date2);

		   bool IsDate1EqualDate2(clsDate Date1, clsDate Date2);
		   bool IsDateEqualDate2(clsDate Date2);

		   enum enDateCompare { Before = -1, Equal = 0, After = 1 };
		   enDateCompare CompareDates(clsDate Date1, clsDate Date2);
		   enDateCompare CompareDates(clsDate Date2);

		   bool IsLastDayOfMonth(short day, short month, short year);
		   bool IsLastDayOfMonth(clsDate Date);
		   bool IsLastDayOfMonth();

		   bool IsLastMonthOfYear(short month);
		   bool IsLastMonthOfYear();

		   bool IsWeekend(clsDate Date);
		   bool IsWeekend();

		   bool IsBusyDay(clsDate Date);
		   bool IsBusyDay();

		   size_t DaysUntilEndOfWeek(clsDate Date);
		   size_t DaysUntilEndOfWeek();

		   size_t DaysUntilEndOfMonth(clsDate Date);
		   size_t DaysUntilEndOfMonth();

		   size_t DaysUntilEndOfYear(clsDate Date);
		   size_t DaysUntilEndOfYear();

		   size_t CalculateBusinessDays(clsDate StartDate, clsDate EndDate);
		   size_t CalculateBusinessDays(clsDate EndDate);

		   size_t CalculateVacationDays(clsDate StartDate, clsDate EndDate);
		   size_t CalculateVacationDays(clsDate EndDate);

		   clsDate CalculateVacationReturnDate(clsDate DateFrom, short VacationDays);
		   clsDate CalculateVacationReturnDate(short VacationDays);

		   clsDate AddOneDay(clsDate Date);
		   void AddOneDay();

		   void SwapDates(clsDate& Date1, clsDate& Date2);

		   size_t GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay = false);
		   size_t GetDifferenceInDays(clsDate Date2, bool IncludeEndDay = false);

		   size_t CalculateAge(clsDate DateOfBirth);


		   // Date Increasers
		   clsDate IncreaseDateBy1Week(clsDate& Date);
		   void IncreaseDateBy1Week();

		   clsDate IncreaseDateByXWeeks(size_t NumOfWeeks, clsDate& Date);
		   void IncreaseDateByXWeeks(size_t NumOfWeeks);

		   clsDate IncreaseDateBy1Month(clsDate& Date);
		   void    IncreaseDateBy1Month();

		   clsDate IncreaseDateByXDays(size_t NumOfDays, clsDate& Date);
		   void    IncreaseDateByXDays(size_t NumOfDays);

		   clsDate IncreaseDateByXMonths(size_t NumOfMonths, clsDate& Date);
		   void    IncreaseDateByXMonths(size_t NumOfMonths);

		   clsDate IncreaseDateBy1Year(clsDate &Date);
		   void    IncreaseDateBy1Year();

		   clsDate IncreaseDateByXYears(size_t NumOfYears, clsDate& Date);
		   void    IncreaseDateByXYears(size_t NumOfYears);

		   clsDate IncreaseDateBy1Decade(clsDate& Date);
		   void    IncreaseDateBy1Decade();

		   clsDate IncreaseDateByXDecades(size_t NumOfDecades, clsDate& Date);
		   void    IncreaseDateByXDecades(size_t NumOfDecades);

		   clsDate IncreaseDateBy1Century(clsDate& Date);
		   void    IncreaseDateBy1Century();

		   clsDate IncreaseDateByXCenturies(size_t NumOfCenturies, clsDate& Date);
		   void    IncreaseDateByXCenturies(size_t NumOfCenturies);

		   clsDate IncreaseDateBy1Millennium(clsDate& Date);
		   void    IncreaseDateBy1Millennium();

		   clsDate IncreaseDateByXMillenniums(size_t NumOfMillennia, clsDate& Date);
		   void    IncreaseDateByXMillenniums(size_t NumOfMillennia);

		   // Date Decreasers
		   clsDate DecreaseDateBy1Day(clsDate& Date);
		   void    DecreaseDateBy1Day();

		   clsDate DecreaseDateByXDays(size_t NumOfDays, clsDate& Date);
		   void    DecreaseDateByXDays(size_t NumOfDays);

		   clsDate DecreaseDateBy1Week(clsDate& Date);
		   void    DecreaseDateBy1Week();

		   clsDate DecreaseDateByXWeeks(size_t NumOfWeeks, clsDate& Date);
		   void    DecreaseDateByXWeeks(size_t NumOfWeeks);

		   clsDate DecreaseDateBy1Month(clsDate& Date);
		   void    DecreaseDateBy1Month();

		   clsDate DecreaseDateByXMonths(size_t NumOfMonths, clsDate& Date);
		   void    DecreaseDateByXMonths(size_t NumOfMonths);

		   clsDate DecreaseDateBy1Year(clsDate& Date);
		   void    DecreaseDateBy1Year();

		   clsDate DecreaseDateByXYears(size_t NumOfYears, clsDate& Date);
		   void    DecreaseDateByXYears(size_t NumOfYears);

		   clsDate DecreaseDateBy1Decade(clsDate& Date);
		   void    DecreaseDateBy1Decade();

		   clsDate DecreaseDateByXDecades(size_t NumOfDecades, clsDate& Date);
		   void    DecreaseDateByXDecades(size_t NumOfDecades);

		   clsDate DecreaseDateBy1Century(clsDate& Date);
		   void    DecreaseDateBy1Century();

		   clsDate DecreaseDateByXCenturies(size_t NumOfCenturies, clsDate& Date);
		   void    DecreaseDateByXCenturies(size_t NumOfCenturies);

		   clsDate DecreaseDateBy1Millennium(clsDate& Date);
		   void    DecreaseDateBy1Millennium();

		   clsDate DecreaseDateByXMillenniums(size_t NumOfMillennia, clsDate& Date);
		   void	   DecreaseDateByXMillenniums(size_t NumOfMillennia);



		// Strings
		   std::string DayShortName(short DayOfWeekOrder);
		   std::string DayShortName(short day, short month, short year);
		   std::string DayShortName();
		   
		   std::string MonthShortName(size_t month);
		   std::string MonthShortName();

		   std::string DateToString();

		// Printing
		   void PrintDate();

		   void PrintMonthCalendar(short Month, short Year);
		   void PrintMonthCalendar();

		   void PrintYearCalendar(short Year);
		   void PrintYearCalendar();
		


	}; // class clsDateLib

	
} // namespace Project3

// Project03: Date Library Project