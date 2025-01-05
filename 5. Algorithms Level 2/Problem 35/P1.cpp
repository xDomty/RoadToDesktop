#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

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

void RandomNumbersOfArray(int arr[100], int ArrayLength ,int From , int To)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		arr[i] = RandomNumber(From, To);
	}
}

bool CheckArrayNumbers(int arr[100], int ArrayLength , int NumberToCheck)
{
    for(int i = 0; i < ArrayLength; i++)
    {
        if(arr[i] == NumberToCheck)
        {
            cout << "The number that you're looking for is: " << NumberToCheck << endl;
            cout << "The number is found :-) \n";
            return true;
        }
    }

    cout << "The number that you're looking for is: " << NumberToCheck << endl;
    cout << "The number is not found :-(\n";
    return false;

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
	
	int arr[100], ArrayLength, NumberToCheck;
	

	ArrayLength = EnterAPositiveNumber("Please enter The Array Length (The Maximum Is 100)");

	int RandomNumbersStart = EnterAPositiveNumber("Please enter the start of random numbers?");
	int RandomNumbersEnd = EnterAPositiveNumber("Please enter the end of random numbers?");


	RandomNumbersOfArray(arr, ArrayLength , RandomNumbersStart, RandomNumbersEnd );
	PrintArrayNumbers(arr, ArrayLength);

    cout << endl;

    NumberToCheck = EnterAPositiveNumber("What is the number you want to check?");
    CheckArrayNumbers(arr,ArrayLength,NumberToCheck);
}