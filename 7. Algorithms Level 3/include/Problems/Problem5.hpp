#pragma once
#include "../HeadersBeforeCourse/Force.hpp"
#include "../HeadersAfterCourse/Operations.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"

namespace Problem5
{
	namespace MrSolution
	{
		int RandomNumber(int From, int To);
		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
		void PrintMatrix(int arr[3][3], short Rows, short Cols);
		int ColSum(int arr[3][3], short Rows, short ColNumber);
		void SumMatixColsInArry(int arr[3][3], int arrSum[3], short Rows, short Cols);
		void PrintColsSumArray(int arr[3], short length);
		void main();
	}

	namespace MySolution
	{
		void main();
	}
}