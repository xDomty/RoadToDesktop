#pragma once
#include <iostream>
using namespace std;

namespace Problem10 {
    int RandomNumber(int From, int To);
    void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
    void PrintMatrix(int arr[3][3], short Rows, short Cols);
    int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols);
    void main();
}