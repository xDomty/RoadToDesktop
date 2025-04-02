#include <iostream>
using namespace std;

int EnterAPositiveNumber(string message)
{
	int positive;
	do
	{
		cout << message << endl;
		cin >> positive;
	} while (positive < 0);
	return positive;
}

int EnterANumber(string message)
{
	cout << message << endl;

	int number;
	cin >> number;
	return number;
}

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void RandomNumbersOfArray(int arr[100], int ArrayLength ,int From , int To)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		arr[i] = RandomNumber(From, To);
	}
}

int PositiveNumbersCountInArray(int arr[100], int ArrayLength)
{
	int counter = 0;
    for (int i = 0; i < ArrayLength; i++)
	{
		if (arr[i] > 0)
		{
			counter++;
		}
	}
	return counter;
}

int NegativeNumbersCountInArray(int arr[100], int ArrayLength)
{
	int counter = 0;
    for (int i = 0; i > ArrayLength; i++)
	{
		if (arr[i] > 0)
		{
			counter++;
		}
	}
	return counter;
}

void PrintArrayNumbers(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Random Number [" << i + 1 << "] : "
			<< arr[i] << endl;
	}
}

int main()
{
	int arr[100],ArrayLength = 0;
	ArrayLength = EnterAPositiveNumber("Please enter the long of array of random numbers?");
    int RandomFrom = EnterANumber("Please enter the array start of random numbers?");
	int RandomTo = EnterANumber("Please enter the array start of random numbers?");

    RandomNumbersOfArray(arr,ArrayLength,RandomFrom,RandomTo);

	cout << "\n\nThe Random Numbers Of Array is :\n";
	PrintArrayNumbers(arr,ArrayLength);
	cout << "\n\nPositive numbers count in random array is : " << PositiveNumbersCountInArray(arr,ArrayLength);
	cout << "\nNegative numbers count in random array is : " << NegativeNumbersCountInArray(arr,ArrayLength);
    cout << endl << endl;
}