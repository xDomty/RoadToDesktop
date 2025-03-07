#pragma once
#include "../HeadersBeforeCourse/Validate.hpp"
#include "../HeadersAfterCourse/Operations.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"
#include <optional>

namespace Problem4
{
	namespace MrSolution
	{
		int RandomNumber(int From, int To);
		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
		void PrintMatrix(int arr[3][3], short Rows, short Cols);
		int ColSum(int arr[3][3], short Rows, short ColNumber);
		void PrintEachColSum(int arr[3][3], short Rows, short Cols);
		void main();
	}

	namespace MySolution
	{
		void main();
	}
}