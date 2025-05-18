//convert double to integar
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num1;
	double num2;
	num2 = 6;
	//implicit Conversion (Done Automaticly By Compiler)
	   num1 = num2;
	//exmplicit Conversion (Done Manually By Programmer)
	   num1 = int(num2); //first method
	   num1 = (int)num2; //second method
 cout << num1;
} 