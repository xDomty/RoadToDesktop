#pragma once
#include <iostream>
using namespace std;

namespace Problem3
{

      int RandomNumber(int From, int To);

      void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);

      void PrintMatrix(int arr[3][3], short Rows, short Cols);

      int RowSum(int arr[3][3], short RowNumber, short Cols);

      void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols);

      void PrintRowsSumArray(int arr[3], short Rows);

      void main();
   
}
