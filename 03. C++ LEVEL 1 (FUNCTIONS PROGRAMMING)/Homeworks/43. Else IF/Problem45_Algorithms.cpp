#include <iostream>
using namespace std;

void months()
{
	short int month;
	string opinion;
	cout << "Please enter the number of the month?\n";
    cin >> month;
	if (month == 1)
	{
		cout << "January\n";
	}
	else if (month == 2)
	{
		cout << "Febraury\n";
	}
	else if (month == 3)
	{
		cout << "March\n";
	}
	else if (month == 4)
	{
		cout << "April\n";
	}
	else if (month == 5)
	{
		cout << "May\n";
	}
	else if (month == 6)
	{
		cout << "June\n";
	}
	else if (month == 7)
	{
		cout << "July\n";
	}
	else if (month == 8)
	{
		cout << "Agust\n";
	}
	else if (month == 9)
	{
		cout << "Septemper\n";
	}
	else if (month == 10)
	{
		cout << "October\n";
	}
	else if (month == 11)
	{
		cout << "November\n";
	}
	else if (month == 12)
	{
		cout << "December\n";
	}
	else
	{
		cout << "WRONG MONTH\n";
	}
	cout << "Do you want to enter the number of another month\n";
	cin >> opinion;
	if (opinion == "y")
	{
		cout << endl;
		months();
	}
	else
	{
		cout << "EXITING PROGORAM...\n";
		system("pause");
	}
}

int main()
{
	months();
}