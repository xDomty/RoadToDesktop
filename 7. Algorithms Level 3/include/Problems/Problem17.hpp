#pragma once
#include <iostream>
using namespace std;

namespace Problem17 {
     void PrintMatrix(int arr[3][3], short Rows, short Cols);
     short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols);
     bool IsNumberInMatrix(int Matrix1[3][3], int Number, short Rows,short Cols);
     void main();
}