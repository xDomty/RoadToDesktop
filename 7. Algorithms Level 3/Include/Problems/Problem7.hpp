#pragma once
#include <iostream>
using namespace std;

namespace Problem7
{
    void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols);
    void PrintMatrix(int arr[3][3], short Rows, short Cols);
    void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols);
    void main();
}