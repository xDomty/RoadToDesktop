#include<iostream>
#include<cstdlib>
using namespace std; 

int RandomNumber(int From, int To) 
{ 
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From; 
	return randNum;
} 

char RandomChar(int TheRandomNumber)
{
	char Char = TheRandomNumber;
	return Char;
}

int main()
{
	srand((unsigned)time(NULL));

	int TheRandomNumber;

	for (int i = 1; i <= 4; i++)
	{
		TheRandomNumber = RandomNumber(33, 125);
		cout << RandomChar(TheRandomNumber) << endl;
	}
} 