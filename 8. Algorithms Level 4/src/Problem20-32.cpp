#include "../include/Problem20-32.hpp"

namespace Problem20To32 {

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

    sDate AddXDaysToDate(unsigned int Days, sDate Date) {
		for (int i = 0; i < Days; i++) {
			Date = IncreaseDateByOneDay(Date);
		}
		return Date;
    }

    sDate Add1WeekToDate(sDate Date) {
		return AddXDaysToDate(7, Date);
    }

    sDate AddXWeeksToDate(unsigned int Weeks, sDate Date) {
        for (unsigned int i = 1; i <= Weeks; i++) {
			Date = Add1WeekToDate(Date);
        }
		return Date;
    }

    sDate Add1MonthToDate(sDate Date) {
        if (Date.Month == 12) {
            Date.Month = 1;
            Date.Year++;
        }
        else {
            Date.Month++;
        }

        short NumberOfDaysInCurrentMonth = NumberOfDaysInAMonth(Date.Month, Date.Year);

        if (Date.Day > NumberOfDaysInCurrentMonth) Date.Day = NumberOfDaysInCurrentMonth;
        return Date;
    }

	sDate AddXMonthsToDate(unsigned int Months, sDate Date) {
		for (unsigned int i = 1; i <= Months; i++) {
			Date = Add1MonthToDate(Date);
		}
		return Date;
	}

	sDate IncreaseDateBy1Year(sDate Date) {
		Date.Year++; return Date;
	}

    sDate IncreaseDateByXYears(unsigned int Years, sDate Date) {
        for (unsigned int i = 1; i <= Years; i++) {
			Date = IncreaseDateBy1Year(Date);
        }
        return Date;
    }

    sDate IncreaseDateByXYearsFaster(unsigned int Years, sDate Date) {
		Date.Year += Years; 
        return Date;
    }

    sDate IncreaseDateBy1Decade(sDate Date) {
		return IncreaseDateByXYears(10, Date);
    }

    sDate IncreaseDateBy1DecadeFaster(sDate Date) {
		return IncreaseDateByXYearsFaster(10, Date);
    }

	sDate IncreaseDateByXDecades(unsigned int Decades, sDate Date) {
		return IncreaseDateByXYears(10 * Decades, Date);
	}

    sDate IncreaseDateByXDecadesFaster(unsigned int Decades, sDate Date) {
		return IncreaseDateByXYearsFaster(10 * Decades, Date);
    }

	sDate IncreaseDateBy1Century(sDate Date) {
		return IncreaseDateByXYears(100, Date);
	}

    sDate IncreaseDateBy1CenturyFaster(sDate Date) {
		return IncreaseDateByXYearsFaster(100, Date);
    }

	sDate IncreaseDateByXCenturies(unsigned int Centuries, sDate Date) {
		return IncreaseDateByXYears(100 * Centuries, Date);
	}
	
    sDate IncreaseDateByXCenturiesFaster(unsigned int Centuries, sDate Date) {
        return IncreaseDateByXYearsFaster(100 * Centuries, Date);
    }

    sDate IncreaseDateBy1Millennium(sDate Date) {
		return IncreaseDateByXYears(1000, Date);
    }

    sDate IncreaseDateBy1MillenniumFaster(sDate Date) {
		return IncreaseDateByXYearsFaster(1000, Date);
    }

    string DateAsString(sDate Date) {
        return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
    }

	void main() {
		sDate Date = ReadDateInfo();
        cout << "\nDate After: \n";

        Date = IncreaseDateByOneDay(Date);
        cout << "\n01-Adding one day is: "  << DateAsString(Date) << endl;

        Date = AddXDaysToDate(10, Date);
        cout << "\n02-Adding 10 days is: "  << DateAsString(Date) << endl;

        Date = Add1WeekToDate(Date);
        cout << "\n03-Adding one week is: " << DateAsString(Date) << endl;

        Date = AddXWeeksToDate(10, Date);
        cout << "\n04-Adding 10 weeks is: " << DateAsString(Date) << endl;

        Date = Add1MonthToDate(Date);
        cout << "\n05-Adding one month is: " << DateAsString(Date) << endl;

        Date = AddXMonthsToDate(5, Date);
        cout << "\n06-Adding 5 months is: " << DateAsString(Date) << endl;

        Date = IncreaseDateBy1Year(Date);
        cout << "\n07-Adding one year is: " << DateAsString(Date) << endl;

        Date = IncreaseDateByXYears(10, Date);
        cout << "\n08-Adding 10 Years is: " << DateAsString(Date) << endl;

        Date = IncreaseDateByXYearsFaster(10, Date);
        cout << "\n09-Adding 10 Years (faster) is: " << DateAsString(Date) << endl;

        Date = IncreaseDateBy1DecadeFaster(Date);
        cout << "\n10-Adding one Decade is: " << DateAsString(Date) << endl;

        Date = IncreaseDateByXDecades(10, Date);
		cout << "\n11-Adding 10 Decades is: " << DateAsString(Date) << endl;

        Date = IncreaseDateByXDecadesFaster(10, Date);
        cout << "\n12-Adding 10 Decade (faster) is: " << DateAsString(Date) << endl;

        Date = IncreaseDateBy1Century(Date);
        cout << "\n13-Adding One Century is: " << DateAsString(Date) << endl;

        Date = IncreaseDateBy1Millennium(Date);
        cout << "\n14-Adding One Millennium is: " << DateAsString(Date) << endl;
	}
}