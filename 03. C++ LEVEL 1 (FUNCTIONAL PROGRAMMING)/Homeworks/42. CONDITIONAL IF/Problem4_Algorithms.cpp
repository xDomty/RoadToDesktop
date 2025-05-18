#include <iostream>
using namespace std;

void LicenseAndAge()
{
	bool license;
    int age;
	cout << "Please enter your age\n";
	cin >> age;
	cout << "Do you have license? (0 if no / 1 if yes)\n";
	cin >> license;
	cout << endl;
	if (age >= 21 && license == 1)
	{
		cout << "HIRED";
	}
	else
	{
		cout << "REJECTED";
	}
}
int main()
{
	LicenseAndAge();
}