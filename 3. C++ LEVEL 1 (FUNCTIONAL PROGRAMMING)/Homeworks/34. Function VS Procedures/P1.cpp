#include <iostream>
using namespace std;

void Calculate()
{
	int num1;
	int num2;
	cout << "Please enter number1?\n";
	cin >> num1;
	cout << "Please enter number2?\n";
	cin >> num2;
	cout << "**********************\n";
	cout << "number 1 + number 2 = " << num1 + num2 << endl;
}

int main()
{
	Calculate();
}