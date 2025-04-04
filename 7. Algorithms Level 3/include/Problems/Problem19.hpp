#pragma once
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersAfterCourse/Operations.hpp"

namespace Problem19 {
    namespace MrSolution {
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Cols);
        int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}