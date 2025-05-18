#include <iostream>
using namespace std;

void ReadArray(int arr[100], int& ArrayLength)
{
	cout << "Please enter the length of array? (Maximum is 100)\n";
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Array [" << i + 1 << "] : ";
		cin >> arr[i];
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

short FindNumberPositionInArrayButOnlyOnce(int NumberToSearch, int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        if (arr[i] == NumberToSearch)
           return i;
    }
    return -1;
}

bool IsNumberInArray(int NumberToSearch, int arr[100], int ArrayLength)
{
    return FindNumberPositionInArrayButOnlyOnce(NumberToSearch,arr, ArrayLength) != -1;
}

void AddArrayElement(int number, int arr[100], int &ArrayLength)
{
    ArrayLength++;
    arr[ArrayLength-1] = number;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{ 
    for (int i = 0; i < SourceLength; i++)     
    { 
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
          {
             AddArrayElement(arrSource[i], arrDestination, DestinationLength);         
          }     
    };
}

int main()
{
    int ArraySource[100] , ArraySourceLength = 0;
    ReadArray(ArraySource,ArraySourceLength);

    ////////////////////////////////////////////

    cout << "This is the array 1 of numbers you have entered\n";
    PrintArrayNumbers(ArraySource,ArraySourceLength);
    cout << endl << endl;

    ////////////////////////////////////////////

    int ArrayDestination[100], ArrayDestinationLength = 0;
    CopyDistinctNumbersToArray(ArraySource,ArrayDestination,ArraySourceLength,ArrayDestinationLength);

    ////////////////////////////////////////////

    cout << "This is the array 2 of numbers you repeated it and it took one time only:\n";
    PrintArrayNumbers(ArrayDestination,ArrayDestinationLength);
    cout << endl << endl;

    ////////////////////////////////////////////

    // END;
}