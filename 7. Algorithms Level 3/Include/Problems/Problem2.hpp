#pragma once
#include <iostream>
using namespace std;

namespace Problem2
{
     int RandomNumber(int From, int To);

     void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);

     void PrintMatrix(int arr[3][3], short Rows, short Cols);

     int RowSum(int arr[3][3],short RowNumber, short Cols);

     void PrintEachRowSum(int arr[3][3], short Rows, short Cols);

     void main();

}
