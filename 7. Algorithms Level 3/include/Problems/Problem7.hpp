#pragma once
#include "../HeadersAfterCourse/FillVector.hpp"
#include "../HeadersAfterCourse/Transpose.hpp"
#include "../HeadersBeforeCourse/Print.hpp"

namespace Problem7
{
	namespace MrSolution
	{
		void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols);
		void PrintMatrix(int arr[3][3], short Rows, short Cols);
		void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols);
		void main();
	}

	namespace MySolution
	{
		void main();
	}
}