#include <iostream>
#include <cstdlib>
using namespace std;

int EnterANumber(string message)
{
	cout << message << endl;

	int number;
	cin >> number;
	return number;
}

void AddArrayElement(int number, int arr[100], int &ArrayLength)
{
    ArrayLength++;
    arr[ArrayLength-1] = number;
}

void InputUserNumbersInArray(int arr[100], int &ArrayLength)
{

    bool AddMore = true;
    ArrayLength = 0;
    do
    {

         AddArrayElement(EnterANumber("Please enter the element:"),arr,ArrayLength);

         cout << "Do you want to add more numbers (1 for true, 0 for false)?\n";
         cin >> AddMore;

    } while (AddMore);

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
    int arr[100] , ArrayLength;
    InputUserNumbersInArray(arr,ArrayLength);
    PrintArrayNumbers(arr,ArrayLength);
}