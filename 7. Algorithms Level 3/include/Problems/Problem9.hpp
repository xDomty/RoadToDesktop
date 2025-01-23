#pragma once
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersAfterCourse/Operations.hpp"

namespace Problem9 {
    namespace MrSolution {
        int RandomNumber(int From, int To);
        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols);
        void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}