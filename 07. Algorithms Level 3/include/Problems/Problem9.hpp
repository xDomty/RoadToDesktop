#pragma once
#include <iostream>
using namespace std;

namespace Problem9 {
     int RandomNumber(int From, int To);
     void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
     void PrintMatrix(int arr[3][3], short Rows, short Cols);
     void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols);
     void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols);
     void main();
}