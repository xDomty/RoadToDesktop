#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float length, RectangleDiameter, result, power2;
	power2 = 2;
	cout << "Hello!\nThis program calculates rectangle area through diagonal and side area of rectangle and print it on the screen.\n";
	cout << "Please enter the length of the rectangle\n";
	cin >> length;
	cout << "Ok, and the rectangle diameter?\n";
	cin >> RectangleDiameter;
	result = length * sqrt((pow(RectangleDiameter,power2 )) - (pow(length,power2 )));
	cout << "Ok, Here is your result by squared length units : " << result << endl;
	system("pause");
}