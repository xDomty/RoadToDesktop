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

string GenerateWord(int NumberOfLetters)
{
	string word = "";
	for (int i = 1; i <= NumberOfLetters; i++)
	{
		word = word + RandomChar(enCharType::CapitalLetters);
	}
	return word;
}

string GenerateKey(int LengthOfKey)
{
	string key = "";
	for (int y = 1; y <= LengthOfKey; y++)
	{
		key = key + GenerateWord(4); //EDIT GENERATE WORD TO THE LENGTH OF THE ONE WORD
		key = key + "-";
	}

	key = key + "\b ";

	return key;
}

void GenerateKEYS(int NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "KEY [" << i << "] = ";
		cout << GenerateKey(4);
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int NumberOfKeys = EnterAPositiveNumber("Please enter how many of keys do you want?");

	GenerateKEYS(NumberOfKeys);
}