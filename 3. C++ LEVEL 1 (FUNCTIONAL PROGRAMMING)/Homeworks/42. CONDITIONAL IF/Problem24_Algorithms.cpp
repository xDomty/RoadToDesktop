#include <iostream>

using namespace std;

void TheProgram()
{
	float age;
	cout << "Hello!\nEnter your age\n";
	cin >> age;
	if (age <= 45)
	{
		if (age >= 18)
		{
			cout << "VAILD AGE";
		}
		else
		{
			cout << "UNVAILD AGE";
		}
	}
	else
	{
		cout << "UNVAILD AGE";
	}
}
int main()
{
	TheProgram();
}