#include <iostream>
using namespace std;

void Welcome()
{
	cout << "Hello, This program calculates the average of 3 marks !!!\n\n";
}

void GettingMarks(float mark[3])
{
	cout << "Please enter the first mark1\n";
	cin >> mark[0];
	cout << "Please enter the first mark2\n";
	cin >> mark[1];
	cout << "Please enter the first mark3\n";
	cin >> mark[2];
	cout << endl << endl;
}

float Calculate(float mark[3])
{
	float result = (mark[0] + mark[1] + mark[2]) / 3;
	return result;
}

void final(float mark[3])
{

	cout << "Here is the average of 3 marks : " << Calculate(mark) << " degrees.." << endl;
}

void TheProgram()
{
	float marks[3];
	Welcome();
	GettingMarks(marks);
	Calculate(marks);
	final(marks);
}

int main()
{
	TheProgram();
	return 0;
}