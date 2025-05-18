#include <iostream>
using namespace std;

double DetailsToSeconds(double Days,double Hours,double Minutes, double Seconds)
{
	double TotalSeconds = Days * 86400 + Hours * 3600 + Minutes * 60 + Seconds;
	return TotalSeconds;
}

void TheProgram()
{
	double Days;
	double Hours;
	double Minutes;
	double Seconds;
	cout << "Hello!,\nThis program calculates the days, hours, minutes and seconds to Total seconds\n";
	cout << "So please enter the number of the days\n";
	cin >> Days;
	cout << "please enter the number of the hours\n";
	cin >> Hours;
	cout << "please enter the number of the minutes\n";
	cin >> Minutes;
	cout << "Finally enter the number of the seconds" << endl;
	cin >> Seconds;
	cout << "Here is your result:\n" << DetailsToSeconds(Days, Hours, Minutes, Seconds) << " seconds\n";
	system("pause");
}
int main()
{
	TheProgram();
}