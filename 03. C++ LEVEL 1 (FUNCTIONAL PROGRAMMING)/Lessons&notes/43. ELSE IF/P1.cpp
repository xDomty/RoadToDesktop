#include <iostream>
using namespace std;
void TheProgram()
{
	float grade;
	cout << "Please enter your grade\n";
	cin >> grade;
	if (90 <= grade && grade <= 100)
	{
		cout << "A";
	}
	else if (80 <= grade && grade <= 89)
	{
		cout << "B";
	}
	else if (70 <= grade && grade <= 79)
	{
		cout << "C";
	}
	else if (60 <= grade && grade <= 69)
	{
		cout << "D";
	}
	else if (50 <= grade && grade <= 59)
	{
		cout << "E";
	}
	else
	{
		cout << "F";
	}

}
int main()
{
	TheProgram();
}