#include <iostream>
using namespace std;

float MySumFunction(float num1, float num2)
{
	return num1 + num2;
}

int main()
{
	float num1, num2;
	cout << "Please enter number1?\n";
	cin >> num1;
	cout << "Please enter number2?\n";
	cin >> num2;
	cout << "**********************\n";
	cout << "number 1 + number 2 = " << MySumFunction(num1,num2);
}