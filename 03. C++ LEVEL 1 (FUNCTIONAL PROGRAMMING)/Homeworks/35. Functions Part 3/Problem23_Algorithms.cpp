#include <iostream>
#include <cmath>
using namespace std;
float CircleArea(float a,float b,float c)
{
	float area;
	float p = (a + b + c) / 2;
	float ForEquation = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	const float pi = 3.14;
	area = pi * ForEquation * ForEquation;
	return area;
}
void TheProgram()
{
	float a, b, c;
	cout << "This program calculates the area of a circle described around an arbitrary triangle\n";
	cout << "Please write the length of the first side of the triangle\n";
	cin >> a;
	cout << "Please write the length of the second side of the triangle\n";
	cin >> b;
	cout << "Please write the length of the third side of the triangle\n";
	cin >> c;
	cout << "area =" << CircleArea(a, b, c);
	system("pause");
}
int main()
{
	TheProgram();
}