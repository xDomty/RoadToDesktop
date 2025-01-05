#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

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

void RandomNumbersOfArray(int arr[100], int ArrayLength ,int From , int To)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		arr[i] = RandomNumber(From, To);
	}
}

void Arr1PlusArr2ToArr3(int arr1[100],int arr2[100],int arr3[100], int ArrLength)
{
   for(int i = 0; i < ArrLength; i++)
   {
	 arr3[i] = arr1[i] + arr2[i];
   }
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
	int arr2[100] , arr3[100];


    ArrayLength = ReadAPositiveNumber("Please enter The Array Length (The Maximum Is 100)");


	int RandomNumbersStart = ReadAPositiveNumber("Please enter the start of random numbers?");
	int RandomNumbersEnd = ReadAPositiveNumber("Please enter the end of random numbers?");


	RandomNumbersOfArray(arr, ArrayLength , RandomNumbersStart, RandomNumbersEnd );
    RandomNumbersOfArray(arr2, ArrayLength , RandomNumbersStart, RandomNumbersEnd );
    Arr1PlusArr2ToArr3(arr,arr2,arr3,ArrayLength);

    cout << endl << "The Random Numbers Of The Array 1 Is:";
    cout << endl << "___________________________\n\n";
	PrintArrayNumbers(arr, ArrayLength);
	cout << "\n___________________________\n";
    
    cout << endl << "The Random Numbers Of The Array 2 Is:";
    cout << endl << "___________________________\n\n";
	PrintArrayNumbers(arr2, ArrayLength);
	cout << "\n___________________________\n";

	cout << endl << "(Array 1 + Array 2) Is:";
    cout << endl << "___________________________\n\n";
	PrintArrayNumbers(arr3, ArrayLength);
	cout << "\n___________________________\n";
    
}