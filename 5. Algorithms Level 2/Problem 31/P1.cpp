#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int EnterANumber(string message)
{
	cout << message << endl;

	int number;
	cin >> number;
	return number;
}

void FillArrayFrom1ToN(int arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        arr[i] = i+1;
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

void swap(float &a, float &b)
{
    float c;
    c=a;
    a=b;
    b=c;
}

void ShuffleArray(int arr[100] , int ArrayLength)
{
   for (int i = 1; i <= ArrayLength; i++)
   {
      swap(arr[RandomNumber(1, ArrayLength) - 1] , arr[RandomNumber(1, ArrayLength) - 1]);
   }
}

int SumOfArray(int arr[100] , int ArrayLength)
{
    int sum = 0;
    for(int i = 0; i < ArrayLength; i++)
    {
        sum = sum + arr[i]; 
    }

      return sum;
}

int main()
{

    //////////////////////////////////////////////////

	srand((unsigned)time(NULL));
	
	int arr[100], ArrayLength;
	
    //////////////////////////////////////////////////

	ArrayLength = EnterANumber("Please enter The Array Length (The Maximum Is 100)");

    //////////////////////////////////////////////////

	FillArrayFrom1ToN(arr,ArrayLength);
    cout << "\n\n________________________\n\n";
    cout << "Here is Array Numbers before shuffle\n";
    cout << "\n________________________\n\n";
    PrintArrayNumbers(arr,ArrayLength);

    cout << "\n\nThe Sum Of It is : " << SumOfArray(arr,ArrayLength);
    //////////////////////////////////////////////////

    ShuffleArray(arr , ArrayLength);
    cout << "\n\n________________________\n\n";
    cout << "Here is Array Numbers after shuffle\n";
    cout << "\n________________________\n\n";
	PrintArrayNumbers(arr, ArrayLength);

    cout << "\n\nThe Sum Of It is : " << SumOfArray(arr,ArrayLength);
    //////////////////////////////////////////////////

}