#include <iostream>
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

void CopyArrayToAnotherArrayButInReversedOrder(int arr[100] , int arr2[100] , int ArrayLength)
{
    int counter = 0;
    for (int i = ArrayLength; i >= 0; i--)
    {
        arr2[counter] = arr[i - 1];
        counter++;
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

    //////////////////////////////////////////////////

	srand((unsigned)time(NULL));
	
	int arr[100], ArrayLength;
    int arr2[100];
	
    //////////////////////////////////////////////////

	ArrayLength = ReadAPositiveNumber("Please enter The Array Length (The Maximum Is 100)");
    int RandomNumbersStart = ReadAPositiveNumber("Please enter the start of random numbers?");
	int RandomNumbersEnd = ReadAPositiveNumber("Please enter the end of random numbers?");
    
    //////////////////////////////////////////////////

	RandomNumbersOfArray(arr,ArrayLength,RandomNumbersStart,RandomNumbersEnd);
    cout << "\n\n________________________\n\n";
    cout << "Here is the Array Random Numbers\n";
    cout << "\n________________________\n\n";
    PrintArrayNumbers(arr,ArrayLength);

    //////////////////////////////////////////////////

    CopyArrayToAnotherArrayButInReversedOrder(arr,arr2,ArrayLength);
    cout << "\n\n________________________\n\n";
    cout << "Here is Array Random Numbers After Reverse\n";
    cout << "\n________________________\n\n";
	PrintArrayNumbers(arr2, ArrayLength);

    //////////////////////////////////////////////////

}