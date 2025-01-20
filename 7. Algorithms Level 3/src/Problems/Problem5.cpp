#include "../../include/Problems/Problem5.hpp"

namespace Problem5
{
	namespace MrSolution
	{
		int RandomNumber(int From, int To)
		{
			//Function to generate a random number
			int randNum = rand() % (To - From + 1) + From;
			return randNum;
		}
		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
			Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 100);
				}
			}
		}
		void PrintMatrix(int arr[3][3], short Rows, short Cols)
		{
			for (short i = 0; i < Rows; i++)
			{
				for (short j = 0; j < Cols; j++)
				{
					cout << setw(3) << arr[i][j] << " ";
				}
				cout << "\n";
			}
		}
		int ColSum(int arr[3][3], short Rows, short ColNumber)
		{
			int Sum = 0;
			for (short i = 0; i <= Rows - 1; i++)
			{
				Sum += arr[i][ColNumber];
			}
			return Sum;
		}
		void SumMatixColsInArry(int arr[3][3], int arrSum[3], short Rows,
			short Cols)
		{
			for (short i = 0; i < Cols; i++)
			{
				arrSum[i] = ColSum(arr, Rows, i);
			}
		}
		void PrintColsSumArray(int arr[3], short length)
		{
			cout << "\nThe the following are the sum of each col in the matrix:\n";
				for (short i = 0; i < length; i++)
				{
					cout << " Col " << i + 1 << " Sum = " << arr[i] << endl;
				}
		}
		void main()
		{
			//Seeds the random number generator in C++, called only once
			srand((unsigned)time(NULL));
			int arr[3][3];
			int arrSum[3];
			FillMatrixWithRandomNumbers(arr, 3, 3);
			cout << "\nThe following is a 3x3 random matrix:\n";
			PrintMatrix(arr, 3, 3);
			SumMatixColsInArry(arr, arrSum, 3, 3);
			PrintColsSumArray(arrSum, 3);
		}
	}

	namespace MySolution
	{
		void main()
		{
			vector <vector<short>> vVector;
			Random::Numbers::FillVector2D<short>(vVector, 3, 3, 1, 100);
			Print::Print2DVectorAsMatrix("Here is the 3d Vector\n", vVector, "", true, 3, 3);
			vector <short> resultOfCols = OPERATIONS::_2DVectors::SumOfEachColInsideASeperateVector::To<short>(vVector, 3, true);
			Print::PrintVector("The Result of Col", resultOfCols, true);
		}
	}
}