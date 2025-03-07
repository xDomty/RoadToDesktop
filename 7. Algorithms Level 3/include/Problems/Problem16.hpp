#pragma once
#include "../HeadersBeforeCourse/Print.hpp"
#include "../HeadersBeforeCourse/Random.hpp"
#include "../HeadersAfterCourse/Check.hpp"
#include <cmath>

namespace Problem16 {
    namespace MrSolution {
        void PrintMatrix(int arr[3][3], short Rows, short Cols);
        short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols);
        bool IsSparseMatrix(int Matrix1[3][3], short Rows, short Cols);
        void main();
    }

    namespace MySolution {
        void main();
    }
}