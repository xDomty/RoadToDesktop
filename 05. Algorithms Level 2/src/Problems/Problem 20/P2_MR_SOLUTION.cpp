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


int main()
{
	srand((unsigned)time(NULL));

	enCharType CharType;

    cout << "Random Capital Letter : " << RandomChar(enCharType::CapitalLetters) << endl;
	cout << "Random Small Letter : " << RandomChar(enCharType::SmallLetters) << endl;
	cout << "Random Special Character : " << RandomChar(enCharType::SpecialChar) << endl;
	cout << "Random Digit : " << RandomChar(enCharType::Digits) << endl;
}