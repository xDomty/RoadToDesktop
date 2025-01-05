#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum en_PrimeOrNot {Prime = 1, NotPrime = 2};

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadAPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
        return number;
}

en_PrimeOrNot CheckPrime(int number)
{

if (number == 1)
{
    return en_PrimeOrNot::NotPrime;
}

  int HalfNumber = round(number / 2);

  for (int counter = 2; counter <= HalfNumber; counter++)
   {
       if (number % counter == 0)
       {
           return en_PrimeOrNot::NotPrime;
       }
   }

           return en_PrimeOrNot::Prime;
}


void RandomNumbersOfArray(int arr[100], int ArrayLength ,int From , int To)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		arr[i] = RandomNumber(From, To);
	}
}

void ThePrimeNumbersOfArray(int arrayToCheck[100], int NewArrToPutInItThePrimeNumbers[100],int ArrayToCheckLength, int &ArrPrimeNumbersLength)
{
    int counter = 0;
    for (int i = 0; i < ArrayToCheckLength; i++)
    {
        if (CheckPrime(arrayToCheck[i]) == en_PrimeOrNot::Prime)
        {
            NewArrToPutInItThePrimeNumbers[counter] = arrayToCheck[i];
            counter++;
        }
    }
    ArrPrimeNumbersLength = counter--;
}

void PrintArrayNumbers(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Number [" << i + 1 << "] : "
			<< arr[i] << endl;
	}
}


int main()
{
    srand((unsigned)time(NULL));
	

	int arr[100], ArrayLength;
    int PrimeOfArr[100] , ArrayOfPrimeLength = 0;


    ArrayLength = ReadAPositiveNumber("Please enter The Array Length (The Maximum Is 100)");


	int RandomNumbersStart = ReadAPositiveNumber("Please enter the start of random numbers?");
	int RandomNumbersEnd = ReadAPositiveNumber("Please enter the end of random numbers?");


	RandomNumbersOfArray(arr, ArrayLength , RandomNumbersStart, RandomNumbersEnd );
    ThePrimeNumbersOfArray(arr,PrimeOfArr,ArrayLength,ArrayOfPrimeLength);


    cout << endl << "The Random Numbers Of The Array Is:";
    cout << endl << "___________________________\n\n";
	PrintArrayNumbers(arr, ArrayLength);
	cout << "___________________________\n";
    
    
    cout << endl << "The Prime Numbers Of The Array Is:";
    cout << endl << "___________________________\n\n";
	PrintArrayNumbers(PrimeOfArr, ArrayOfPrimeLength);
	cout << "___________________________\n";

    
}