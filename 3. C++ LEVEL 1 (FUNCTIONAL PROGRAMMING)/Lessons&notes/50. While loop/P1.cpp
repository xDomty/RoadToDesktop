#include <iostream>
using namespace std;

int main()
{
	int Positive;
	cout << "Please enter a positive number?\n";
	cin >> Positive;
	while (Positive <= 0)
	{
		cout << "HEEY THAT IS NOT POSITIVE,Please enter a positive number\n";
		cin >> Positive;
	}
	cout << "The number you entered is " << Positive;
}