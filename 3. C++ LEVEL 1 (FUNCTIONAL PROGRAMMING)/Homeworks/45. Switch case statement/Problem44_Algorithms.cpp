#include <iostream>
using namespace std;

enum enDAYS {saturday = 1,sunday = 2,monday = 3,tuesday =4,wednesday=5,thursday=6,friday=7};

void Welcome()
{
	cout << "Hello, please choose your day\n";
}

void ChooseDay()
{
	cout << "**********************\n";
	cout << "(1) saturday\n";
	cout << "(2) sunday\n";
	cout << "(3) monday\n";
	cout << "(4) tuesday\n";
	cout << "(5) wednesday\n";
	cout << "(6) thursday\n";
	cout << "(7) friday\n";
	cout << "**********************\n";
}

void TakeUserDecision()
{
	enDAYS Today;
	int TakeTheDay;
	cin >> TakeTheDay;
	Today = (enDAYS)TakeTheDay;
	switch (Today)
	{
	    case enDAYS::saturday:
			cout << "YOUR DAY ISSSSSS ";
            cout << "saturday\n";
			break;

		case enDAYS::sunday:
			cout << "YOUR DAY ISSSSSS ";
			cout << "sunday\n";
			break;
		case enDAYS::monday:
			cout << "YOUR DAY ISSSSSS ";
			cout << "monday\n";
			break;

		case enDAYS::tuesday:
			cout << "YOUR DAY ISSSSSS ";
			cout << "tuesday\n";
			break;

		case enDAYS::wednesday:
			cout << "YOUR DAY ISSSSSS ";
			cout << "wednesday\n";
			break;
		case enDAYS::thursday:
			cout << "YOUR DAY ISSSSSS ";
			cout << "thursday\n";
			break;
		case enDAYS::friday:
			cout << "YOUR DAY ISSSSSS ";
			cout << "friday\n";
			break;
		default:
			cout << "HEY, THIS IS NOT EVEN A DAY NUMBER , EWW BROTHER\n";
			break;
	}
	cout << "Do you want to enter another day?\n";
	string decision;
	cin >> decision;
	if (decision == "y")
	{
		cout << "OK, Choose it\n";
		ChooseDay();
		TakeUserDecision();
	}
}

int main()
{
	Welcome();
	ChooseDay();
	TakeUserDecision();
}