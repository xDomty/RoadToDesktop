#pragma once
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersBeforeCourse/Comparing.hpp"

namespace Problem12 {
    namespace MrSolution {
        int RandomNumber(int From, int To);
        void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols);
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        bool AreTypicalMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}