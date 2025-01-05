#include <iostream>
using namespace std;

float Calculate(float &mark1,float &mark2,float &mark3)
{
	float grades[3] = {mark1, mark2, mark3};
	float result = (grades[0] + grades[1] + grades[2]) / 3;
	return result;
}

void Welcome()
{
	cout << "Hello, This program calculates the average of 3 marks !!!\n\n";
}

void GettingMarks()
{
	float mark1, mark2, mark3;
	cout << "Please enter the first mark1\n";
	cin >> mark1;
	cout << "Please enter the first mark2\n";
	cin >> mark2;
	cout << "Please enter the first mark3\n";
	cin >> mark3;
	cout << endl << endl;
	cout << "Here is the average of 3 marks : " << Calculate(mark1, mark2, mark3) << " degrees.." << endl;
}

void TheProgram()
{
	Welcome();
	GettingMarks();
}

int main()
{
	TheProgram();
	return 0;
}