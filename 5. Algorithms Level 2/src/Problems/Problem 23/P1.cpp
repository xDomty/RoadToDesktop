#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int EnterANumber(string message)
{
	cout << message << endl;

	int number;
	cin >> number;
	return number;
}

void RandomNumbersOfArray(int arr[100], int ArrayLength ,int From , int To)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		arr[i] = RandomNumber(From, To);
	}
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
	srand((unsigned)time(NULL));
	
	int arr[100], ArrayLength;
	

	ArrayLength = EnterANumber("Please enter The Array Length (The Maximum Is 100)");

	int RandomNumbersStart = EnterANumber("Please enter the start of random numbers?");
	int RandomNumbersEnd = EnterANumber("Please enter the end of random numbers?");


	RandomNumbersOfArray(arr, ArrayLength , RandomNumbersStart, RandomNumbersEnd );
	PrintArrayNumbers(arr, ArrayLength);

	

}