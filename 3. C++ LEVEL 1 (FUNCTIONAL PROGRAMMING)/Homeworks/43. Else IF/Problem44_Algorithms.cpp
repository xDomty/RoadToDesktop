#include <iostream>
using namespace std;

void Days()
{
	short int day;
	char Opinion;
	cout << "Please enter the number of the day in the week\n";
	cin >> day;
	if (day == 1)
	{
		cout << "Sunday\n";
	}
	else if (day == 2)
	{
		cout << "Monday\n";
	}
	else if (day == 3)
	{
		cout << "Tuesday\n";
	}
	else if (day == 4)
	{
		cout << "Wednesday\n";
	}
	else if (day == 5)
	{
		cout << "Thursday\n";
	}
	else if (day == 6)
	{
		cout << "Friday\n";
	}
	else if (day == 7)
	{
		cout << "Saturday\n";
	}
	else
	{
		cout << "WRONG DAY\n";
	}
	cout << "Do you want to enter another day ? (y/n)\n";
	cin >> Opinion;
	if (Opinion == 'y')
	{
		cout << endl;
		Days();
	}
	else
	{
		cout << "Exiting program...";
		system("pause");
	}
}
int main()
{
	Days();
}