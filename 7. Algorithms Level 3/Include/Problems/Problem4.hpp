#pragma once
#include <iostream>
using namespace std;

namespace Problem4
{
	int RandomNumber(int From, int To);
	void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
	void PrintMatrix(int arr[3][3], short Rows, short Cols);
	int ColSum(int arr[3][3], short Rows, short ColNumber);
	void PrintEachColSum(int arr[3][3], short Rows, short Cols);
	void main();
}