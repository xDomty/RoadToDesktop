#include <iostream>
#include <cmath>
using namespace std;

float ThePOWER(float number,float power)
{
   return pow(number, power);
}

int main()
{
float number;
float power;
cout << "Hello, This program calcultes the ( (number you want) ^ (power you want) )\n";
cout << "Please enter the number\n";
cin >> number;
cout << "Please enter the power\n";
cin >> power;
cout << "Here is your result : " << number << " ^ " << power << " = " << ThePOWER(number, power);
}