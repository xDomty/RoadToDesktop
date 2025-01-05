//convert [int,float,double] to string  
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1;
	double num2;
	float num3;
	num1 = 5;
	num2 = 7.5;
	num3 = 10.3;
	string str;
	str = to_string(num1);
	cout << str << endl;
	str = to_string(num2);
	cout << str << endl;
	str = to_string(num3);
	cout << str << endl;
} 