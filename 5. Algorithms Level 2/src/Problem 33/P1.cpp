#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}


enum enCharType { CapitalLetters = 1, SmallLetters = 2, SpecialChar = 3, Digits = 4};


char RandomChar(enCharType CharType)
{
	int TheRandomNumber;
	char RandomChar;
	switch (CharType)
	{
	    case enCharType::CapitalLetters:
			TheRandomNumber = RandomNumber(65, 90);
			RandomChar = TheRandomNumber;
			return RandomChar;
		case enCharType::SmallLetters:
			TheRandomNumber = RandomNumber(97, 122);
			RandomChar = TheRandomNumber;
			return RandomChar;
		case enCharType::SpecialChar:
			TheRandomNumber = RandomNumber(32, 47);
			RandomChar = TheRandomNumber;
			return RandomChar;
		case enCharType::Digits:
			TheRandomNumber = RandomNumber(48, 57);
			RandomChar = TheRandomNumber;
			return RandomChar;
	}
	
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

string GenerateKeys()
{
    string TheKey = "";

		for (int x = 1; x <= 4; x++)
		{
			
			for ( int y = 1; y <= 4; y++)
			{
				TheKey = TheKey + RandomChar(enCharType::CapitalLetters);

			}

			TheKey = TheKey + "-";
		}

		TheKey = TheKey + "\b ";

		return TheKey;

}

void TakeRandomKeysToAnArray(string arr[100], int NumberOfKeys)
{
     for (int i = 0; i < NumberOfKeys; i++)
      {
          arr[i] = GenerateKeys();
      }
}

void PrintArrayKeys(string arr[100], int NumberOfKeys)
{
	for (int i = 0; i < NumberOfKeys; i++)
	{
		cout << "Key [" << i + 1 << "] : "
			<< arr[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
    string arr[100];
	int NumberOfKeys = EnterAPositiveNumber("Please enter how many of keys do you want?");

	TakeRandomKeysToAnArray(arr,NumberOfKeys);
    PrintArrayKeys(arr,NumberOfKeys);
}