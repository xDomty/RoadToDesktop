#include <iostream>
using namespace std;

enum enMONTH { january = 1, feburary = 2, march = 3, april = 4, may = 5, june = 6, july = 7 , august = 8, september = 9, october = 10, november = 11, december = 12};

void Welcome()
{
	cout << "Hello, please choose your month\n";
}

void ChooseMonth()
{
	cout << "**********************\n";
	cout << "(1) january\n";
	cout << "(2) feburary\n";
	cout << "(3) march\n";
	cout << "(4) april\n";
	cout << "(5) may\n";
	cout << "(6) june\n";
	cout << "(7) july\n";
	cout << "(8) august\n";
	cout << "(9) september\n";
	cout << "(10) october\n";
	cout << "(11) november\n";
	cout << "(12) december\n";
	cout << "*********************\n";
}

void TakeUserDecision()
{
	enMONTH currently;
	int TakeTheMonth;
	cin >> TakeTheMonth;
	currently = (enMONTH)TakeTheMonth;
	switch (currently)
	{
	case enMONTH::january:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "january\n";
		break;

	case enMONTH::feburary:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "feburary\n";
		break;
	case enMONTH::march:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "march\n";
		break;

	case enMONTH::april:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "april\n";
		break;

	case enMONTH::may:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "may\n";
		break;
	case enMONTH::june:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "june\n";
		break;
	case enMONTH::july:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "july\n";
		break;
	case enMONTH::august:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "august\n";
		break;

	case enMONTH::september:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "september\n";
		break;

	case enMONTH::october:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "october\n";
		break;
	case enMONTH::november:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "november\n";
		break;
	case enMONTH::december:
		cout << "YOUR MONTH ISSSSSS ";
		cout << "december\n";
		break;
	default:
		cout << "HEY, THIS IS NOT EVEN A MONTH NUMBER , EWW BROTHER\n";
		break;
	}
	cout << "Do you want to enter another month? (y/n)\n";
	char decision;
	cin >> decision;
	if (decision == 'y')
	{
		cout << "OK, Choose it\n";
		ChooseMonth();
		TakeUserDecision();
	}
	else
	{
		cout << "Thanks for using my program :)\n";
		cout << "made by adam\n";
		cout << "EXITING PROGRAM...";
	}

}

int main()
{
	Welcome();
	ChooseMonth();
	TakeUserDecision();
}