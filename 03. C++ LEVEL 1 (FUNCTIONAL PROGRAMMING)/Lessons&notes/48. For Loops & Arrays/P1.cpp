#include <iostream>
using namespace std;

void ReadArrayData(float Arr1[100], float& Length)
{
	cout << "How Many Numbers do you want to enter? 1 to 100?\n";
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Please enter Number " << i + 1 << endl;
		cin >> Arr1[i];
	}
}


void PrintArrayData(float Arr1[100], int Length)
{
	cout << "\nArray Data...\n";
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;
	}
}


float CalculateArraySum(float Arr1[100], int Length)
{
	float Sum = 0;
	for (int i = 0; i <= Length - 1; i++)
	{
		Sum += Arr1[i];
	}
	return Sum;
}


float CalculateArrayAverage(float Arr1[100], int Length)
{
	return  CalculateArraySum(Arr1, Length) / Length;
}


int main()
{
	float Arr1[100], Length = 0;
	ReadArrayData(Arr1, Length);
	PrintArrayData(Arr1, Length);
	cout << "\n************************************\n";
	cout << "Sum = " << CalculateArraySum(Arr1, Length) << endl;
	cout << "Average = " << CalculateArrayAverage(Arr1, Length) << endl;
	return 0;
}
