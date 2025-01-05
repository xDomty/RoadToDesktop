#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 }; 

enPrimNotPrime CheckPrime	(int Number) 
{ 
	if (Number == 1)
    {
        return enPrimNotPrime::NotPrime;
    }

    int M = round(Number / 2); 
    for (int Counter = 2; Counter <= M; Counter++)     
    { 
        if (Number % Counter == 0) 
        return enPrimNotPrime::NotPrime;     
    } 
    return enPrimNotPrime::Prime; 
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


void AddArrayElement(int number, int arr[100], int &ArrayLength)
{
    ArrayLength++;
    arr[ArrayLength-1] = number;
}

void CopyArrayPrimeNumbersUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
 {
	 for (int i = 0; i < arrLength; i++) 
     {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
           AddArrayElement(arrSource[i], arrDestination, arrDestinationLength); 
        }  
	 }
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

void PrintArrayNumbers(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Array [" << i + 1 << "] : "
			<< arr[i] << endl;
	}
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100] , ArrayLength , RandomFrom , RandomTo ;

	/////////////////////////////////////////////////////

    ArrayLength = EnterAPositiveNumber("Please enter the long of array of random numbers?");
    RandomFrom = EnterAPositiveNumber("Please enter the array start of random numbers?");
	RandomTo = EnterAPositiveNumber("Please enter the array start of random numbers?");

    RandomNumbersOfArray(arr,ArrayLength,RandomFrom,RandomTo);

	cout << "The random numbers of array 1:\n";
    PrintArrayNumbers(arr,ArrayLength);
	cout << endl << endl;

    /////////////////////////////////////////////////////

	int arr2[100], ArrayLengthOfARR2 = 0;
    
	CopyArrayPrimeNumbersUsingAddArrayElement(arr,arr2,ArrayLength,ArrayLengthOfARR2);

	/////////////////////////////////////////////////////

    cout << "The random numbers of array 2 after copy only prime numbers:\n";
    PrintArrayNumbers(arr2,ArrayLengthOfARR2);
    cout << endl << endl;

}   
