#pragma once
#include <iostream> 
using namespace std;

namespace Problem18 {
    void PrintMatrix(int arr[3][3], short Rows, short Cols);
    bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols);
    void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols);
    void main();
}