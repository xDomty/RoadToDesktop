#pragma once
#include <iostream>
using namespace std;

namespace Problem5
{
     int  RandomNumber(int From, int To);
     void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
     void PrintMatrix(int arr[3][3], short Rows, short Cols);
     int  ColSum(int arr[3][3], short Rows, short ColNumber);
     void SumMatixColsInArry(int arr[3][3], int arrSum[3], short Rows, short Cols);
     void PrintColsSumArray(int arr[3], short length);
     void main();
}