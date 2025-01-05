#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a, b, c , pi , area;
cout << "This program calculates the area of a circle described around an arbitrary triangle\n";
cout << "Please enter the area of the triangle\n";
cout << "entar a \n";
cout << "enter b \n";
cout << "enter c \n";
cin >> a;
cin >> b;
cin >> c;
double p = (a + b + c) / 2;
double ForEquation = (a * b * c)/ (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
pi = 3.14;
area = pi * ForEquation * ForEquation;
cout << "area =" << area;
system("pause");
}