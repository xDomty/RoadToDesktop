#pragma once
#include <iostream>
using namespace std;

namespace Problem8
{
    int  RandomNumber(int From, int To);
    void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
    void PrintMatrix(int arr[3][3], short Rows, short Cols);
    void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], short Rows, short Cols);
    void main();
}