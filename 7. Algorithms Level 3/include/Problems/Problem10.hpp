#pragma once
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersAfterCourse/Operations.hpp"

namespace Problem10 {
    namespace MrSolution {
        int RandomNumber(int From, int To);
        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}