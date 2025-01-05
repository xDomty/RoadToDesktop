#include <iostream>

using namespace std;

void Require()
{
	cout << "Please enter pin code\n";
}

void repeater()
{
	short int pinCODE;
	cin >> pinCODE;
	if (pinCODE == 1234)
	{
		cout << "Your Balance is: 7500";
	}
	else
	{
		cout << "WRONG PIN\nPlease enter THE PIN AGAIN\n";
		repeater();
	}
}
int main()
{
	Require();
	repeater();
}