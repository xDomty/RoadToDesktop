#include <iostream>

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
		cout << "Number [" << i + 1 << "] : "
			<< arr[i] << endl;
	}
}


int MaxNumber(int arr[100], int ArrayLength)
{
	int max = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int MinNumber(int arr[100], int ArrayLength, int MaxNumber)
{
    int maxForMin = MaxNumber;
    int min = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (arr[i] < maxForMin) 
		{
			min = arr[i];
            maxForMin = arr[i];
		}
	}

    return min;
}

void PrintTheMaxAndTheMin(int MaxNumber, int MinNumber)
{
    cout << "The max number is " << MaxNumber << endl;
    cout << "The min number is " << MinNumber << endl;
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

int AverageOfArray(int TheSumOfArray, int ArrayLength)
{
    return (TheSumOfArray / ArrayLength);
}

int main()
{

    srand((unsigned)time(NULL));

	int arr[100], ArrayLength;
	

	ArrayLength = EnterANumber("Please enter The Array Length (The Maximum Is 100)");


	int RandomNumbersStart = EnterANumber("Please enter the start of random numbers?");
	int RandomNumbersEnd = EnterANumber("Please enter the end of random numbers?");
    

	RandomNumbersOfArray(arr, ArrayLength , RandomNumbersStart, RandomNumbersEnd );


    int TheMaxNumber = MaxNumber(arr,ArrayLength);
    int TheMinNumber = MinNumber(arr,ArrayLength,TheMaxNumber);
    int TheSumOfArray = SumOfArray(arr,ArrayLength);
    int TheAverageOfArray = AverageOfArray(TheSumOfArray,ArrayLength);

    cout << endl << "___________________________\n\n";
	PrintArrayNumbers(arr, ArrayLength);
	cout << "___________________________\n";
	
    
	cout << endl << "___________________________\n\n";
    PrintTheMaxAndTheMin(TheMaxNumber,TheMinNumber);
	cout << "___________________________\n";


    cout << endl << "___________________________\n\n";
    cout << "The sum of array is " << TheSumOfArray;
	cout << "\n___________________________\n";

    cout << endl << "___________________________\n\n";
    cout << "The average of array is " << TheAverageOfArray;
	cout << "\n___________________________\n";

	cout << endl << endl;


}