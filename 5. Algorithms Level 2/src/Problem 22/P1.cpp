#include <iostream>
using namespace std;

int EnterANumber(string message)
{
	cout << message << endl;

	int number;
	cin >> number;
	return number;
}

void ReadArray(int arr[100], int& ArrayLength)
{
	cout << "Please enter the length of array? (Maximum is 100)\n";
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Array [" << i + 1 << "] : ";
		cin >> arr[i];
	}
}

int TimesRepeatedInArrays(int arr[100], int ArrayLength, int NumberToCheck)
{
	int counter = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (arr[i] == NumberToCheck)
		{
			counter++;
		}
	}

	return counter;
}



int main()
{
	srand((unsigned)time(NULL));
	
	int arr[100], ArrayLength;
	ReadArray(arr, ArrayLength);

	int NumberToCheck = EnterANumber("Please enter The Number To Check?");

	cout << "\n\nNumber " << NumberToCheck << " :" << endl
		<< "is repeated " << TimesRepeatedInArrays(arr, ArrayLength, NumberToCheck) << " Times\n\n";

}