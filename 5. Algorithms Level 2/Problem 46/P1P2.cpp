#include <iostream>
#include <cmath>
using namespace std;

int EnterANumber(string message)
{
	cout << message << endl;

	int number;
	cin >> number;
	return number;
}

float TheAbsolute(int number)
{
    if (number >= 0)
       return number;
    else
       return number*-1;
}

int main()
{
    int number = EnterANumber("Please enter a number to print the absolute value of it");
    cout << "\n\nThe absolute value using my function : " << TheAbsolute(number) << endl;
    cout << "The absolute value using abs : " << abs(number) << endl;

}