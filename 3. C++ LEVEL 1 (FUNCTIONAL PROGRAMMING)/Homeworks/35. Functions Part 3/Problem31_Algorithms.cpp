#include <iostream>
#include <cmath>
using namespace std;
float Power2(float input)
{
	return pow(input, 2);
}

float Power3(float input)
{
	return pow(input, 3);
}

float Power4(float input)
{
	return pow(input, 4);
}

void TheProgram()
{
	float input;
	cout << "Hello,\nThis program makes the number you type power to (2,3,4)\n";
	cout << "Please enter the number\n";
	cin >> input;
	cout << "Here is your result:\n";
	cout << input << "^2 = " << Power2(input) << endl;
	cout << input << "^3 = " << Power3(input) << endl;
	cout << input << "^4 = " << Power4(input) << endl;
	system("pause");
}
int main()
{
	TheProgram();
}